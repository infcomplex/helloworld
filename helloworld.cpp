//#include <fmt/core.h>
#include <SFML/Network.hpp>
#include <iostream>
#include <string>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

bool portIsOpen(const string& address, int port)
{
    sf::TcpSocket socket;
    sf::Time timeout = sf::seconds(10);
    bool open = (socket.connect(sf::IpAddress(address), port, timeout) == sf::Socket::Done);
    socket.disconnect();
    return open;
}

vector<int> getPortRanges(const string input)
{
    string current;
    bool range = false;
    int cnt = 0;
    int lastno;
    current.reserve(30);
    vector<int> returnvector;
    for (int i = 0; i <= input.length(); i++) 
    {
        //cout << "loop iteration " << i;
        if (input[i] == ',' || (range && input[i] == '\0'))
        {
            if (range)
            {
                //i'm not a big fan of myself tbqh
                //cout << "before loop";
                for (int h = lastno; h <= stoi(current); h++)
                {
                    returnvector.push_back(h);
                }
                range = false;
            }
            else
            {
                //cout << "before standard push";
                returnvector.push_back(stoi(current));
                //cout << input[i];
            }
            cnt = 0;
            current.clear();
        }
        else if (input[i] == '-' )
        {
            //cout << "before dash operations";
            lastno = stoi(current);
            range = true;
            current.clear();
            cnt = 0;
        }
        else if (input[i] == '\0')
        {
            returnvector.push_back(stoi(current));
        }
        else
        {
            //cout << "before standard number placement";
            current[cnt] = input[i];
            cnt++;
        }
        
    }
    return returnvector;
}

vector<string> getIPAddresses(const string input)
{
    vector<string> adresses;
    int start = 0;
    int end = 0;
    int decimal = 0;
    int total = 0;
    int decimals = 0;
    int invalids = 0;
    bool loop = false;
    bool pass = false;
    for(int i = 0; i < input.length() + 1; i++)
    {
        if (pass)
        {
            invalids++;
            continue;
        }
        if ((input[i] == ',') || input[i] == '\0')
        {
            if (pass)
            {
                pass = false;
                invalids++;
                continue;
            }
            end = i - start;
            adresses.push_back(input.substr(start, end));
            start = i + 1;
            decimals = 0;
            total = 0;
        }
        else if(input[i] == '.')
        {

            decimal = i;
            decimals++;
            if ((total > 256 && decimals > 2)|| decimals > 4)
            {
                cout << "Invalid address, skipping...";
                pass = true;
                total = 0;
                invalids++;
                continue;
            }
            total = 0;
        }
        else
        {

        }
    }
    return adresses;
}

int main()
{
    string ports;
    cout << "Enter any number of ports, separated by commas. Ranges are possible with dashes.\n";
    cin >> ports;
    vector<int> portslist = getPortRanges(ports);
    cout << "Enter any number of IP addresses, separated by commas.\n";
    cin >> ports;
    vector<string> addresslist = getIPAddresses(ports);
    for (int x = 0; x < addresslist.size(); x++)
    {
        cout << "Scanning host " << addresslist[x] << '\n';
        if (system())
        {
            for (int h = 0; h < portslist.size(); h++)
            {
                cout << "PORT " << portslist[h] << ":";
                if (portIsOpen(addresslist[x], portslist[h]))
                {
                    cout << "OPENED\n";
                }
                else
                {
                    cout << "CLOSED\n";
                }
            }
        }
    }
     
    return 0;
}

