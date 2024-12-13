Package: sfml[audio,core,graphics,network,window]:x64-linux@2.6.2

**Host Environment**

- Host: x64-linux
- Compiler: GNU 11.4.0
-    vcpkg-tool version: 2024-11-12-eb492805e92a2c14a230f5c3deb3e89f6771c321
    vcpkg-scripts version: 19847ac3d 2024-12-12 (18 hours ago)

**To Reproduce**

`vcpkg install `

**Failure logs**

```
-- Using cached SFML-SFML-2.6.2.tar.gz.
-- Cleaning sources at /home/infcomplex/.repos/vcpkg/buildtrees/sfml/src/2.6.2-8c34997038.clean. Use --editable to skip cleaning for the packages you specify.
-- Extracting source /home/infcomplex/.repos/vcpkg/downloads/SFML-SFML-2.6.2.tar.gz
-- Applying patch fix-dependencies.patch
-- Applying patch fix-dep-openal.patch
-- Using source at /home/infcomplex/.repos/vcpkg/buildtrees/sfml/src/2.6.2-8c34997038.clean
-- SFML currently requires the following libraries from the system package manager:
    libudev
    libx11
    libxrandr
    libxcursor
    opengl

These can be installed on Ubuntu systems via apt-get install libx11-dev libxrandr-dev libxcursor-dev libxi-dev libudev-dev libgl1-mesa-dev
-- Configuring x64-linux
CMake Error at scripts/cmake/vcpkg_execute_required_process.cmake:127 (message):
    Command failed: /home/infcomplex/.repos/vcpkg/downloads/tools/ninja/1.10.2-linux/ninja -v
    Working Directory: /home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-rel/vcpkg-parallel-configure
    Error code: 1
    See logs for more information:
      /home/infcomplex/.repos/vcpkg/buildtrees/sfml/config-x64-linux-dbg-CMakeCache.txt.log
      /home/infcomplex/.repos/vcpkg/buildtrees/sfml/config-x64-linux-rel-CMakeCache.txt.log
      /home/infcomplex/.repos/vcpkg/buildtrees/sfml/config-x64-linux-dbg-CMakeConfigureLog.yaml.log
      /home/infcomplex/.repos/vcpkg/buildtrees/sfml/config-x64-linux-rel-CMakeConfigureLog.yaml.log
      /home/infcomplex/.repos/vcpkg/buildtrees/sfml/config-x64-linux-out.log

Call Stack (most recent call first):
  /home/infcomplex/Documents/dev/cpp/helloworld/build/vcpkg_installed/x64-linux/share/vcpkg-cmake/vcpkg_cmake_configure.cmake:269 (vcpkg_execute_required_process)
  /home/infcomplex/.cache/vcpkg/registries/git-trees/16580cf264c6a8933fb657e425a5866568d4c394/portfile.cmake:27 (vcpkg_cmake_configure)
  scripts/ports.cmake:196 (include)



```

<details><summary>/home/infcomplex/.repos/vcpkg/buildtrees/sfml/config-x64-linux-out.log</summary>

```
[1/2] "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake" -E chdir ".." "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake" "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/src/2.6.2-8c34997038.clean" "-G" "Ninja" "-DCMAKE_BUILD_TYPE=Release" "-DCMAKE_INSTALL_PREFIX=/home/infcomplex/.repos/vcpkg/packages/sfml_x64-linux" "-DFETCHCONTENT_FULLY_DISCONNECTED=ON" "-DSFML_BUILD_FRAMEWORKS=OFF" "-DSFML_USE_SYSTEM_DEPS=ON" "-DSFML_MISC_INSTALL_PREFIX=share/sfml" "-DSFML_GENERATE_PDB=OFF" "-DSFML_WARNINGS_AS_ERRORS=OFF" "-DSFML_BUILD_NETWORK=ON" "-DSFML_BUILD_GRAPHICS=ON" "-DSFML_BUILD_WINDOW=ON" "-DSFML_BUILD_AUDIO=ON" "-DCMAKE_MAKE_PROGRAM=/home/infcomplex/.repos/vcpkg/downloads/tools/ninja/1.10.2-linux/ninja" "-DCMAKE_SYSTEM_NAME=Linux" "-DBUILD_SHARED_LIBS=OFF" "-DVCPKG_CHAINLOAD_TOOLCHAIN_FILE=/home/infcomplex/.repos/vcpkg/scripts/toolchains/linux.cmake" "-DVCPKG_TARGET_TRIPLET=x64-linux" "-DVCPKG_SET_CHARSET_FLAG=ON" "-DVCPKG_PLATFORM_TOOLSET=external" "-DCMAKE_EXPORT_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_SYSTEM_PACKAGE_REGISTRY=ON" "-DCMAKE_INSTALL_SYSTEM_RUNTIME_LIBS_SKIP=TRUE" "-DCMAKE_VERBOSE_MAKEFILE=ON" "-DVCPKG_APPLOCAL_DEPS=OFF" "-DCMAKE_TOOLCHAIN_FILE=/home/infcomplex/.repos/vcpkg/scripts/buildsystems/vcpkg.cmake" "-DCMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION=ON" "-DVCPKG_CXX_FLAGS=" "-DVCPKG_CXX_FLAGS_RELEASE=" "-DVCPKG_CXX_FLAGS_DEBUG=" "-DVCPKG_C_FLAGS=" "-DVCPKG_C_FLAGS_RELEASE=" "-DVCPKG_C_FLAGS_DEBUG=" "-DVCPKG_CRT_LINKAGE=dynamic" "-DVCPKG_LINKER_FLAGS=" "-DVCPKG_LINKER_FLAGS_RELEASE=" "-DVCPKG_LINKER_FLAGS_DEBUG=" "-DVCPKG_TARGET_ARCHITECTURE=x64" "-DCMAKE_INSTALL_LIBDIR:STRING=lib" "-DCMAKE_INSTALL_BINDIR:STRING=bin" "-D_VCPKG_ROOT_DIR=/home/infcomplex/.repos/vcpkg" "-D_VCPKG_INSTALLED_DIR=/home/infcomplex/Documents/dev/cpp/helloworld/build/vcpkg_installed" "-DVCPKG_MANIFEST_INSTALL=OFF"
FAILED: ../CMakeCache.txt 
"/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake" -E chdir ".." "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake" "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/src/2.6.2-8c34997038.clean" "-G" "Ninja" "-DCMAKE_BUILD_TYPE=Release" "-DCMAKE_INSTALL_PREFIX=/home/infcomplex/.repos/vcpkg/packages/sfml_x64-linux" "-DFETCHCONTENT_FULLY_DISCONNECTED=ON" "-DSFML_BUILD_FRAMEWORKS=OFF" "-DSFML_USE_SYSTEM_DEPS=ON" "-DSFML_MISC_INSTALL_PREFIX=share/sfml" "-DSFML_GENERATE_PDB=OFF" "-DSFML_WARNINGS_AS_ERRORS=OFF" "-DSFML_BUILD_NETWORK=ON" "-DSFML_BUILD_GRAPHICS=ON" "-DSFML_BUILD_WINDOW=ON" "-DSFML_BUILD_AUDIO=ON" "-DCMAKE_MAKE_PROGRAM=/home/infcomplex/.repos/vcpkg/downloads/tools/ninja/1.10.2-linux/ninja" "-DCMAKE_SYSTEM_NAME=Linux" "-DBUILD_SHARED_LIBS=OFF" "-DVCPKG_CHAINLOAD_TOOLCHAIN_FILE=/home/infcomplex/.repos/vcpkg/scripts/toolchains/linux.cmake" "-DVCPKG_TARGET_TRIPLET=x64-linux" "-DVCPKG_SET_CHARSET_FLAG=ON" "-DVCPKG_PLATFORM_TOOLSET=external" "-DCMAKE_EXPORT_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_SYSTEM_PACKAGE_REGISTRY=ON" "-DCMAKE_INSTALL_SYSTEM_RUNTIME_LIBS_SKIP=TRUE" "-DCMAKE_VERBOSE_MAKEFILE=ON" "-DVCPKG_APPLOCAL_DEPS=OFF" "-DCMAKE_TOOLCHAIN_FILE=/home/infcomplex/.repos/vcpkg/scripts/buildsystems/vcpkg.cmake" "-DCMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION=ON" "-DVCPKG_CXX_FLAGS=" "-DVCPKG_CXX_FLAGS_RELEASE=" "-DVCPKG_CXX_FLAGS_DEBUG=" "-DVCPKG_C_FLAGS=" "-DVCPKG_C_FLAGS_RELEASE=" "-DVCPKG_C_FLAGS_DEBUG=" "-DVCPKG_CRT_LINKAGE=dynamic" "-DVCPKG_LINKER_FLAGS=" "-DVCPKG_LINKER_FLAGS_RELEASE=" "-DVCPKG_LINKER_FLAGS_DEBUG=" "-DVCPKG_TARGET_ARCHITECTURE=x64" "-DCMAKE_INSTALL_LIBDIR:STRING=lib" "-DCMAKE_INSTALL_BINDIR:STRING=bin" "-D_VCPKG_ROOT_DIR=/home/infcomplex/.repos/vcpkg" "-D_VCPKG_INSTALLED_DIR=/home/infcomplex/Documents/dev/cpp/helloworld/build/vcpkg_installed" "-DVCPKG_MANIFEST_INSTALL=OFF"
-- The C compiler identification is GNU 11.4.0
-- The CXX compiler identification is GNU 11.4.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Found X11: /usr/include
-- Looking for XOpenDisplay in /usr/lib/x86_64-linux-gnu/libX11.so
-- Looking for XOpenDisplay in /usr/lib/x86_64-linux-gnu/libX11.so - found
-- Looking for gethostbyname
-- Looking for gethostbyname - found
-- Looking for connect
-- Looking for connect - found
-- Looking for remove
-- Looking for remove - found
-- Looking for shmat
-- Looking for shmat - found
-- Found OpenGL: /usr/lib/x86_64-linux-gnu/libOpenGL.so
-- UDev not found.
-- UDev: You can specify includes: -DUDEV_PATH_INCLUDES=/opt/udev/include
--       currently found includes: UDEV_INCLUDE_DIR-NOTFOUND
-- UDev: You can specify libs: -DUDEV_PATH_LIB=/opt/udev/lib
--       currently found libs: UDEV_LIBRARIES-NOTFOUND
CMake Error at cmake/Modules/FindUDev.cmake:49 (MESSAGE):
  Could not find UDev library
Call Stack (most recent call first):
  /home/infcomplex/.repos/vcpkg/scripts/buildsystems/vcpkg.cmake:859 (_find_package)
  cmake/Macros.cmake:383 (find_package)
  src/SFML/Window/CMakeLists.txt:341 (sfml_find_package)


-- Configuring incomplete, errors occurred!
[2/2] "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake" -E chdir "../../x64-linux-dbg" "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake" "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/src/2.6.2-8c34997038.clean" "-G" "Ninja" "-DCMAKE_BUILD_TYPE=Debug" "-DCMAKE_INSTALL_PREFIX=/home/infcomplex/.repos/vcpkg/packages/sfml_x64-linux/debug" "-DFETCHCONTENT_FULLY_DISCONNECTED=ON" "-DSFML_BUILD_FRAMEWORKS=OFF" "-DSFML_USE_SYSTEM_DEPS=ON" "-DSFML_MISC_INSTALL_PREFIX=share/sfml" "-DSFML_GENERATE_PDB=OFF" "-DSFML_WARNINGS_AS_ERRORS=OFF" "-DSFML_BUILD_NETWORK=ON" "-DSFML_BUILD_GRAPHICS=ON" "-DSFML_BUILD_WINDOW=ON" "-DSFML_BUILD_AUDIO=ON" "-DCMAKE_MAKE_PROGRAM=/home/infcomplex/.repos/vcpkg/downloads/tools/ninja/1.10.2-linux/ninja" "-DCMAKE_SYSTEM_NAME=Linux" "-DBUILD_SHARED_LIBS=OFF" "-DVCPKG_CHAINLOAD_TOOLCHAIN_FILE=/home/infcomplex/.repos/vcpkg/scripts/toolchains/linux.cmake" "-DVCPKG_TARGET_TRIPLET=x64-linux" "-DVCPKG_SET_CHARSET_FLAG=ON" "-DVCPKG_PLATFORM_TOOLSET=external" "-DCMAKE_EXPORT_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_SYSTEM_PACKAGE_REGISTRY=ON" "-DCMAKE_INSTALL_SYSTEM_RUNTIME_LIBS_SKIP=TRUE" "-DCMAKE_VERBOSE_MAKEFILE=ON" "-DVCPKG_APPLOCAL_DEPS=OFF" "-DCMAKE_TOOLCHAIN_FILE=/home/infcomplex/.repos/vcpkg/scripts/buildsystems/vcpkg.cmake" "-DCMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION=ON" "-DVCPKG_CXX_FLAGS=" "-DVCPKG_CXX_FLAGS_RELEASE=" "-DVCPKG_CXX_FLAGS_DEBUG=" "-DVCPKG_C_FLAGS=" "-DVCPKG_C_FLAGS_RELEASE=" "-DVCPKG_C_FLAGS_DEBUG=" "-DVCPKG_CRT_LINKAGE=dynamic" "-DVCPKG_LINKER_FLAGS=" "-DVCPKG_LINKER_FLAGS_RELEASE=" "-DVCPKG_LINKER_FLAGS_DEBUG=" "-DVCPKG_TARGET_ARCHITECTURE=x64" "-DCMAKE_INSTALL_LIBDIR:STRING=lib" "-DCMAKE_INSTALL_BINDIR:STRING=bin" "-D_VCPKG_ROOT_DIR=/home/infcomplex/.repos/vcpkg" "-D_VCPKG_INSTALLED_DIR=/home/infcomplex/Documents/dev/cpp/helloworld/build/vcpkg_installed" "-DVCPKG_MANIFEST_INSTALL=OFF"
FAILED: ../../x64-linux-dbg/CMakeCache.txt 
"/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake" -E chdir "../../x64-linux-dbg" "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake" "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/src/2.6.2-8c34997038.clean" "-G" "Ninja" "-DCMAKE_BUILD_TYPE=Debug" "-DCMAKE_INSTALL_PREFIX=/home/infcomplex/.repos/vcpkg/packages/sfml_x64-linux/debug" "-DFETCHCONTENT_FULLY_DISCONNECTED=ON" "-DSFML_BUILD_FRAMEWORKS=OFF" "-DSFML_USE_SYSTEM_DEPS=ON" "-DSFML_MISC_INSTALL_PREFIX=share/sfml" "-DSFML_GENERATE_PDB=OFF" "-DSFML_WARNINGS_AS_ERRORS=OFF" "-DSFML_BUILD_NETWORK=ON" "-DSFML_BUILD_GRAPHICS=ON" "-DSFML_BUILD_WINDOW=ON" "-DSFML_BUILD_AUDIO=ON" "-DCMAKE_MAKE_PROGRAM=/home/infcomplex/.repos/vcpkg/downloads/tools/ninja/1.10.2-linux/ninja" "-DCMAKE_SYSTEM_NAME=Linux" "-DBUILD_SHARED_LIBS=OFF" "-DVCPKG_CHAINLOAD_TOOLCHAIN_FILE=/home/infcomplex/.repos/vcpkg/scripts/toolchains/linux.cmake" "-DVCPKG_TARGET_TRIPLET=x64-linux" "-DVCPKG_SET_CHARSET_FLAG=ON" "-DVCPKG_PLATFORM_TOOLSET=external" "-DCMAKE_EXPORT_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_SYSTEM_PACKAGE_REGISTRY=ON" "-DCMAKE_INSTALL_SYSTEM_RUNTIME_LIBS_SKIP=TRUE" "-DCMAKE_VERBOSE_MAKEFILE=ON" "-DVCPKG_APPLOCAL_DEPS=OFF" "-DCMAKE_TOOLCHAIN_FILE=/home/infcomplex/.repos/vcpkg/scripts/buildsystems/vcpkg.cmake" "-DCMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION=ON" "-DVCPKG_CXX_FLAGS=" "-DVCPKG_CXX_FLAGS_RELEASE=" "-DVCPKG_CXX_FLAGS_DEBUG=" "-DVCPKG_C_FLAGS=" "-DVCPKG_C_FLAGS_RELEASE=" "-DVCPKG_C_FLAGS_DEBUG=" "-DVCPKG_CRT_LINKAGE=dynamic" "-DVCPKG_LINKER_FLAGS=" "-DVCPKG_LINKER_FLAGS_RELEASE=" "-DVCPKG_LINKER_FLAGS_DEBUG=" "-DVCPKG_TARGET_ARCHITECTURE=x64" "-DCMAKE_INSTALL_LIBDIR:STRING=lib" "-DCMAKE_INSTALL_BINDIR:STRING=bin" "-D_VCPKG_ROOT_DIR=/home/infcomplex/.repos/vcpkg" "-D_VCPKG_INSTALLED_DIR=/home/infcomplex/Documents/dev/cpp/helloworld/build/vcpkg_installed" "-DVCPKG_MANIFEST_INSTALL=OFF"
-- The C compiler identification is GNU 11.4.0
-- The CXX compiler identification is GNU 11.4.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Found X11: /usr/include
-- Looking for XOpenDisplay in /usr/lib/x86_64-linux-gnu/libX11.so
-- Looking for XOpenDisplay in /usr/lib/x86_64-linux-gnu/libX11.so - found
-- Looking for gethostbyname
-- Looking for gethostbyname - found
-- Looking for connect
-- Looking for connect - found
-- Looking for remove
-- Looking for remove - found
-- Looking for shmat
-- Looking for shmat - found
-- Found OpenGL: /usr/lib/x86_64-linux-gnu/libOpenGL.so
-- UDev not found.
-- UDev: You can specify includes: -DUDEV_PATH_INCLUDES=/opt/udev/include
--       currently found includes: UDEV_INCLUDE_DIR-NOTFOUND
-- UDev: You can specify libs: -DUDEV_PATH_LIB=/opt/udev/lib
--       currently found libs: UDEV_LIBRARIES-NOTFOUND
CMake Error at cmake/Modules/FindUDev.cmake:49 (MESSAGE):
  Could not find UDev library
Call Stack (most recent call first):
  /home/infcomplex/.repos/vcpkg/scripts/buildsystems/vcpkg.cmake:859 (_find_package)
  cmake/Macros.cmake:383 (find_package)
  src/SFML/Window/CMakeLists.txt:341 (sfml_find_package)


-- Configuring incomplete, errors occurred!
ninja: build stopped: subcommand failed.
```
</details>

<details><summary>/home/infcomplex/.repos/vcpkg/buildtrees/sfml/config-x64-linux-rel-CMakeCache.txt.log</summary>

```
# This is the CMakeCache file.
# For build in directory: /home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-rel
# It was generated by CMake: /home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake
# You can edit this file to change values found and used by cmake.
# If you do not want to change any of the values, simply exit the editor.
# If you do want to change a value, simply edit, save, and exit the editor.
# The syntax for the file is as follows:
# KEY:TYPE=VALUE
# KEY is the name of a variable in the cache.
# TYPE is a hint to GUIs for the type of VALUE, DO NOT EDIT TYPE!.
# VALUE is the current value for the KEY.

########################
# EXTERNAL cache entries
########################

//TRUE to build SFML as shared libraries, FALSE to build it as
// static libraries
BUILD_SHARED_LIBS:BOOL=OFF

//Path to a program.
CMAKE_ADDR2LINE:FILEPATH=/usr/bin/addr2line

//Path to a program.
CMAKE_AR:FILEPATH=/usr/bin/ar

//Choose the type of build (Debug or Release)
CMAKE_BUILD_TYPE:STRING=Release

CMAKE_CROSSCOMPILING:BOOL=OFF

//CXX compiler
CMAKE_CXX_COMPILER:FILEPATH=/usr/bin/c++

//A wrapper around 'ar' adding the appropriate '--plugin' option
// for the GCC compiler
CMAKE_CXX_COMPILER_AR:FILEPATH=/usr/bin/gcc-ar-11

//A wrapper around 'ranlib' adding the appropriate '--plugin' option
// for the GCC compiler
CMAKE_CXX_COMPILER_RANLIB:FILEPATH=/usr/bin/gcc-ranlib-11

//Flags used by the CXX compiler during all build types.
CMAKE_CXX_FLAGS:STRING=-fPIC

//Flags used by the CXX compiler during DEBUG builds.
CMAKE_CXX_FLAGS_DEBUG:STRING=-g

//Flags used by the CXX compiler during MINSIZEREL builds.
CMAKE_CXX_FLAGS_MINSIZEREL:STRING=-Os -DNDEBUG

//Flags used by the CXX compiler during RELEASE builds.
CMAKE_CXX_FLAGS_RELEASE:STRING=-O3 -DNDEBUG

//Flags used by the CXX compiler during RELWITHDEBINFO builds.
CMAKE_CXX_FLAGS_RELWITHDEBINFO:STRING=-O2 -g -DNDEBUG

//C compiler
CMAKE_C_COMPILER:FILEPATH=/usr/bin/cc

//A wrapper around 'ar' adding the appropriate '--plugin' option
// for the GCC compiler
CMAKE_C_COMPILER_AR:FILEPATH=/usr/bin/gcc-ar-11

//A wrapper around 'ranlib' adding the appropriate '--plugin' option
// for the GCC compiler
CMAKE_C_COMPILER_RANLIB:FILEPATH=/usr/bin/gcc-ranlib-11

//Flags used by the C compiler during all build types.
CMAKE_C_FLAGS:STRING=-fPIC

//Flags used by the C compiler during DEBUG builds.
CMAKE_C_FLAGS_DEBUG:STRING=-g

//Flags used by the C compiler during MINSIZEREL builds.
CMAKE_C_FLAGS_MINSIZEREL:STRING=-Os -DNDEBUG

//Flags used by the C compiler during RELEASE builds.
CMAKE_C_FLAGS_RELEASE:STRING=-O3 -DNDEBUG

//Flags used by the C compiler during RELWITHDEBINFO builds.
CMAKE_C_FLAGS_RELWITHDEBINFO:STRING=-O2 -g -DNDEBUG

//Path to a program.
CMAKE_DLLTOOL:FILEPATH=CMAKE_DLLTOOL-NOTFOUND

//No help, variable specified on the command line.
CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION:UNINITIALIZED=ON

//Flags used by the linker during all build types.
CMAKE_EXE_LINKER_FLAGS:STRING=

//Flags used by the linker during DEBUG builds.
CMAKE_EXE_LINKER_FLAGS_DEBUG:STRING=

//Flags used by the linker during MINSIZEREL builds.
CMAKE_EXE_LINKER_FLAGS_MINSIZEREL:STRING=

//Flags used by the linker during RELEASE builds.
CMAKE_EXE_LINKER_FLAGS_RELEASE:STRING=

//Flags used by the linker during RELWITHDEBINFO builds.
CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO:STRING=

//Enable/Disable output of compile commands during generation.
CMAKE_EXPORT_COMPILE_COMMANDS:BOOL=

//No help, variable specified on the command line.
CMAKE_EXPORT_NO_PACKAGE_REGISTRY:UNINITIALIZED=ON

//No help, variable specified on the command line.
CMAKE_FIND_PACKAGE_NO_PACKAGE_REGISTRY:UNINITIALIZED=ON

//No help, variable specified on the command line.
CMAKE_FIND_PACKAGE_NO_SYSTEM_PACKAGE_REGISTRY:UNINITIALIZED=ON

//Value Computed by CMake.
CMAKE_FIND_PACKAGE_REDIRECTS_DIR:STATIC=/home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-rel/CMakeFiles/pkgRedirects

//No help, variable specified on the command line.
CMAKE_INSTALL_BINDIR:STRING=bin

//Read-only architecture-independent data (DATAROOTDIR)
CMAKE_INSTALL_DATADIR:PATH=

//Read-only architecture-independent data root (share)
CMAKE_INSTALL_DATAROOTDIR:PATH=share

//Documentation root (DATAROOTDIR/doc/PROJECT_NAME)
CMAKE_INSTALL_DOCDIR:PATH=

//C header files (include)
CMAKE_INSTALL_INCLUDEDIR:PATH=include

//Info documentation (DATAROOTDIR/info)
CMAKE_INSTALL_INFODIR:PATH=

//No help, variable specified on the command line.
CMAKE_INSTALL_LIBDIR:STRING=lib

...
Skipped 1082 lines
...
//ADVANCED property for variable: X11_Xrandr_LIB
X11_Xrandr_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_Xrender_INCLUDE_PATH
X11_Xrender_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_Xrender_LIB
X11_Xrender_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_Xshape_INCLUDE_PATH
X11_Xshape_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_Xss_INCLUDE_PATH
X11_Xss_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_Xss_LIB
X11_Xss_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_Xt_INCLUDE_PATH
X11_Xt_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_Xt_LIB
X11_Xt_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_Xtst_INCLUDE_PATH
X11_Xtst_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_Xtst_LIB
X11_Xtst_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_Xutil_INCLUDE_PATH
X11_Xutil_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_Xv_INCLUDE_PATH
X11_Xv_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_Xv_LIB
X11_Xv_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_Xxf86misc_INCLUDE_PATH
X11_Xxf86misc_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_Xxf86misc_LIB
X11_Xxf86misc_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_Xxf86vm_INCLUDE_PATH
X11_Xxf86vm_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_Xxf86vm_LIB
X11_Xxf86vm_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_dpms_INCLUDE_PATH
X11_dpms_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_INCLUDE_PATH
X11_xcb_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_LIB
X11_xcb_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_composite_INCLUDE_PATH
X11_xcb_composite_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_composite_LIB
X11_xcb_composite_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_cursor_INCLUDE_PATH
X11_xcb_cursor_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_cursor_LIB
X11_xcb_cursor_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_damage_INCLUDE_PATH
X11_xcb_damage_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_damage_LIB
X11_xcb_damage_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_dpms_INCLUDE_PATH
X11_xcb_dpms_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_dpms_LIB
X11_xcb_dpms_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_dri2_INCLUDE_PATH
X11_xcb_dri2_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_dri2_LIB
X11_xcb_dri2_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_dri3_INCLUDE_PATH
X11_xcb_dri3_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_dri3_LIB
X11_xcb_dri3_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_errors_INCLUDE_PATH
X11_xcb_errors_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_errors_LIB
X11_xcb_errors_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_ewmh_INCLUDE_PATH
X11_xcb_ewmh_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_ewmh_LIB
X11_xcb_ewmh_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_glx_INCLUDE_PATH
X11_xcb_glx_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_glx_LIB
X11_xcb_glx_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_icccm_INCLUDE_PATH
X11_xcb_icccm_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_icccm_LIB
X11_xcb_icccm_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_image_INCLUDE_PATH
X11_xcb_image_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_image_LIB
X11_xcb_image_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_keysyms_INCLUDE_PATH
X11_xcb_keysyms_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_keysyms_LIB
X11_xcb_keysyms_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_present_INCLUDE_PATH
X11_xcb_present_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_present_LIB
X11_xcb_present_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_randr_INCLUDE_PATH
X11_xcb_randr_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_randr_LIB
X11_xcb_randr_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_record_INCLUDE_PATH
X11_xcb_record_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_record_LIB
X11_xcb_record_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_render_INCLUDE_PATH
X11_xcb_render_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_render_LIB
X11_xcb_render_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_render_util_INCLUDE_PATH
X11_xcb_render_util_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_render_util_LIB
X11_xcb_render_util_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_res_INCLUDE_PATH
X11_xcb_res_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_res_LIB
X11_xcb_res_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_screensaver_INCLUDE_PATH
X11_xcb_screensaver_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_screensaver_LIB
X11_xcb_screensaver_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_shape_INCLUDE_PATH
X11_xcb_shape_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_shape_LIB
X11_xcb_shape_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_shm_INCLUDE_PATH
X11_xcb_shm_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_shm_LIB
X11_xcb_shm_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_sync_INCLUDE_PATH
X11_xcb_sync_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_sync_LIB
X11_xcb_sync_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_util_INCLUDE_PATH
X11_xcb_util_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_util_LIB
X11_xcb_util_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xf86dri_INCLUDE_PATH
X11_xcb_xf86dri_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xf86dri_LIB
X11_xcb_xf86dri_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xfixes_INCLUDE_PATH
X11_xcb_xfixes_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xfixes_LIB
X11_xcb_xfixes_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xinerama_INCLUDE_PATH
X11_xcb_xinerama_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xinerama_LIB
X11_xcb_xinerama_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xinput_INCLUDE_PATH
X11_xcb_xinput_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xinput_LIB
X11_xcb_xinput_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xkb_LIB
X11_xcb_xkb_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xrm_INCLUDE_PATH
X11_xcb_xrm_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xrm_LIB
X11_xcb_xrm_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xtest_INCLUDE_PATH
X11_xcb_xtest_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xtest_LIB
X11_xcb_xtest_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xv_INCLUDE_PATH
X11_xcb_xv_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xv_LIB
X11_xcb_xv_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xvmc_INCLUDE_PATH
X11_xcb_xvmc_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xvmc_LIB
X11_xcb_xvmc_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xkbcommon_INCLUDE_PATH
X11_xkbcommon_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xkbcommon_LIB
X11_xkbcommon_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xkbcommon_X11_INCLUDE_PATH
X11_xkbcommon_X11_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xkbcommon_X11_LIB
X11_xkbcommon_X11_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xkbfile_INCLUDE_PATH
X11_xkbfile_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xkbfile_LIB
X11_xkbfile_LIB-ADVANCED:INTERNAL=1
//Making sure VCPKG_MANIFEST_MODE doesn't change
Z_VCPKG_CHECK_MANIFEST_MODE:INTERNAL=OFF
//Vcpkg root directory
Z_VCPKG_ROOT_DIR:INTERNAL=/home/infcomplex/.repos/vcpkg
//linker supports push/pop state
_CMAKE_LINKER_PUSHPOP_STATE_SUPPORTED:INTERNAL=TRUE
//CMAKE_INSTALL_PREFIX during last run
_GNUInstallDirs_LAST_CMAKE_INSTALL_PREFIX:INTERNAL=/home/infcomplex/.repos/vcpkg/packages/sfml_x64-linux
```
</details>

<details><summary>/home/infcomplex/.repos/vcpkg/buildtrees/sfml/config-x64-linux-dbg-CMakeCache.txt.log</summary>

```
# This is the CMakeCache file.
# For build in directory: /home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-dbg
# It was generated by CMake: /home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake
# You can edit this file to change values found and used by cmake.
# If you do not want to change any of the values, simply exit the editor.
# If you do want to change a value, simply edit, save, and exit the editor.
# The syntax for the file is as follows:
# KEY:TYPE=VALUE
# KEY is the name of a variable in the cache.
# TYPE is a hint to GUIs for the type of VALUE, DO NOT EDIT TYPE!.
# VALUE is the current value for the KEY.

########################
# EXTERNAL cache entries
########################

//TRUE to build SFML as shared libraries, FALSE to build it as
// static libraries
BUILD_SHARED_LIBS:BOOL=OFF

//Path to a program.
CMAKE_ADDR2LINE:FILEPATH=/usr/bin/addr2line

//Path to a program.
CMAKE_AR:FILEPATH=/usr/bin/ar

//Choose the type of build (Debug or Release)
CMAKE_BUILD_TYPE:STRING=Debug

CMAKE_CROSSCOMPILING:BOOL=OFF

//CXX compiler
CMAKE_CXX_COMPILER:FILEPATH=/usr/bin/c++

//A wrapper around 'ar' adding the appropriate '--plugin' option
// for the GCC compiler
CMAKE_CXX_COMPILER_AR:FILEPATH=/usr/bin/gcc-ar-11

//A wrapper around 'ranlib' adding the appropriate '--plugin' option
// for the GCC compiler
CMAKE_CXX_COMPILER_RANLIB:FILEPATH=/usr/bin/gcc-ranlib-11

//Flags used by the CXX compiler during all build types.
CMAKE_CXX_FLAGS:STRING=-fPIC

//Flags used by the CXX compiler during DEBUG builds.
CMAKE_CXX_FLAGS_DEBUG:STRING=-g

//Flags used by the CXX compiler during MINSIZEREL builds.
CMAKE_CXX_FLAGS_MINSIZEREL:STRING=-Os -DNDEBUG

//Flags used by the CXX compiler during RELEASE builds.
CMAKE_CXX_FLAGS_RELEASE:STRING=-O3 -DNDEBUG

//Flags used by the CXX compiler during RELWITHDEBINFO builds.
CMAKE_CXX_FLAGS_RELWITHDEBINFO:STRING=-O2 -g -DNDEBUG

//C compiler
CMAKE_C_COMPILER:FILEPATH=/usr/bin/cc

//A wrapper around 'ar' adding the appropriate '--plugin' option
// for the GCC compiler
CMAKE_C_COMPILER_AR:FILEPATH=/usr/bin/gcc-ar-11

//A wrapper around 'ranlib' adding the appropriate '--plugin' option
// for the GCC compiler
CMAKE_C_COMPILER_RANLIB:FILEPATH=/usr/bin/gcc-ranlib-11

//Flags used by the C compiler during all build types.
CMAKE_C_FLAGS:STRING=-fPIC

//Flags used by the C compiler during DEBUG builds.
CMAKE_C_FLAGS_DEBUG:STRING=-g

//Flags used by the C compiler during MINSIZEREL builds.
CMAKE_C_FLAGS_MINSIZEREL:STRING=-Os -DNDEBUG

//Flags used by the C compiler during RELEASE builds.
CMAKE_C_FLAGS_RELEASE:STRING=-O3 -DNDEBUG

//Flags used by the C compiler during RELWITHDEBINFO builds.
CMAKE_C_FLAGS_RELWITHDEBINFO:STRING=-O2 -g -DNDEBUG

//Path to a program.
CMAKE_DLLTOOL:FILEPATH=CMAKE_DLLTOOL-NOTFOUND

//No help, variable specified on the command line.
CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION:UNINITIALIZED=ON

//Flags used by the linker during all build types.
CMAKE_EXE_LINKER_FLAGS:STRING=

//Flags used by the linker during DEBUG builds.
CMAKE_EXE_LINKER_FLAGS_DEBUG:STRING=

//Flags used by the linker during MINSIZEREL builds.
CMAKE_EXE_LINKER_FLAGS_MINSIZEREL:STRING=

//Flags used by the linker during RELEASE builds.
CMAKE_EXE_LINKER_FLAGS_RELEASE:STRING=

//Flags used by the linker during RELWITHDEBINFO builds.
CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO:STRING=

//Enable/Disable output of compile commands during generation.
CMAKE_EXPORT_COMPILE_COMMANDS:BOOL=

//No help, variable specified on the command line.
CMAKE_EXPORT_NO_PACKAGE_REGISTRY:UNINITIALIZED=ON

//No help, variable specified on the command line.
CMAKE_FIND_PACKAGE_NO_PACKAGE_REGISTRY:UNINITIALIZED=ON

//No help, variable specified on the command line.
CMAKE_FIND_PACKAGE_NO_SYSTEM_PACKAGE_REGISTRY:UNINITIALIZED=ON

//Value Computed by CMake.
CMAKE_FIND_PACKAGE_REDIRECTS_DIR:STATIC=/home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-dbg/CMakeFiles/pkgRedirects

//No help, variable specified on the command line.
CMAKE_INSTALL_BINDIR:STRING=bin

//Read-only architecture-independent data (DATAROOTDIR)
CMAKE_INSTALL_DATADIR:PATH=

...
Skipped 1115 lines
...
//ADVANCED property for variable: X11_Xtst_LIB
X11_Xtst_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_Xutil_INCLUDE_PATH
X11_Xutil_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_Xv_INCLUDE_PATH
X11_Xv_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_Xv_LIB
X11_Xv_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_Xxf86misc_INCLUDE_PATH
X11_Xxf86misc_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_Xxf86misc_LIB
X11_Xxf86misc_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_Xxf86vm_INCLUDE_PATH
X11_Xxf86vm_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_Xxf86vm_LIB
X11_Xxf86vm_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_dpms_INCLUDE_PATH
X11_dpms_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_INCLUDE_PATH
X11_xcb_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_LIB
X11_xcb_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_composite_INCLUDE_PATH
X11_xcb_composite_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_composite_LIB
X11_xcb_composite_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_cursor_INCLUDE_PATH
X11_xcb_cursor_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_cursor_LIB
X11_xcb_cursor_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_damage_INCLUDE_PATH
X11_xcb_damage_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_damage_LIB
X11_xcb_damage_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_dpms_INCLUDE_PATH
X11_xcb_dpms_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_dpms_LIB
X11_xcb_dpms_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_dri2_INCLUDE_PATH
X11_xcb_dri2_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_dri2_LIB
X11_xcb_dri2_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_dri3_INCLUDE_PATH
X11_xcb_dri3_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_dri3_LIB
X11_xcb_dri3_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_errors_INCLUDE_PATH
X11_xcb_errors_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_errors_LIB
X11_xcb_errors_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_ewmh_INCLUDE_PATH
X11_xcb_ewmh_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_ewmh_LIB
X11_xcb_ewmh_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_glx_INCLUDE_PATH
X11_xcb_glx_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_glx_LIB
X11_xcb_glx_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_icccm_INCLUDE_PATH
X11_xcb_icccm_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_icccm_LIB
X11_xcb_icccm_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_image_INCLUDE_PATH
X11_xcb_image_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_image_LIB
X11_xcb_image_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_keysyms_INCLUDE_PATH
X11_xcb_keysyms_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_keysyms_LIB
X11_xcb_keysyms_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_present_INCLUDE_PATH
X11_xcb_present_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_present_LIB
X11_xcb_present_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_randr_INCLUDE_PATH
X11_xcb_randr_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_randr_LIB
X11_xcb_randr_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_record_INCLUDE_PATH
X11_xcb_record_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_record_LIB
X11_xcb_record_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_render_INCLUDE_PATH
X11_xcb_render_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_render_LIB
X11_xcb_render_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_render_util_INCLUDE_PATH
X11_xcb_render_util_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_render_util_LIB
X11_xcb_render_util_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_res_INCLUDE_PATH
X11_xcb_res_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_res_LIB
X11_xcb_res_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_screensaver_INCLUDE_PATH
X11_xcb_screensaver_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_screensaver_LIB
X11_xcb_screensaver_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_shape_INCLUDE_PATH
X11_xcb_shape_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_shape_LIB
X11_xcb_shape_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_shm_INCLUDE_PATH
X11_xcb_shm_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_shm_LIB
X11_xcb_shm_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_sync_INCLUDE_PATH
X11_xcb_sync_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_sync_LIB
X11_xcb_sync_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_util_INCLUDE_PATH
X11_xcb_util_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_util_LIB
X11_xcb_util_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xf86dri_INCLUDE_PATH
X11_xcb_xf86dri_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xf86dri_LIB
X11_xcb_xf86dri_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xfixes_INCLUDE_PATH
X11_xcb_xfixes_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xfixes_LIB
X11_xcb_xfixes_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xinerama_INCLUDE_PATH
X11_xcb_xinerama_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xinerama_LIB
X11_xcb_xinerama_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xinput_INCLUDE_PATH
X11_xcb_xinput_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xinput_LIB
X11_xcb_xinput_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xkb_LIB
X11_xcb_xkb_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xrm_INCLUDE_PATH
X11_xcb_xrm_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xrm_LIB
X11_xcb_xrm_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xtest_INCLUDE_PATH
X11_xcb_xtest_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xtest_LIB
X11_xcb_xtest_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xv_INCLUDE_PATH
X11_xcb_xv_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xv_LIB
X11_xcb_xv_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xvmc_INCLUDE_PATH
X11_xcb_xvmc_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xcb_xvmc_LIB
X11_xcb_xvmc_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xkbcommon_INCLUDE_PATH
X11_xkbcommon_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xkbcommon_LIB
X11_xkbcommon_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xkbcommon_X11_INCLUDE_PATH
X11_xkbcommon_X11_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xkbcommon_X11_LIB
X11_xkbcommon_X11_LIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xkbfile_INCLUDE_PATH
X11_xkbfile_INCLUDE_PATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: X11_xkbfile_LIB
X11_xkbfile_LIB-ADVANCED:INTERNAL=1
//Making sure VCPKG_MANIFEST_MODE doesn't change
Z_VCPKG_CHECK_MANIFEST_MODE:INTERNAL=OFF
//Vcpkg root directory
Z_VCPKG_ROOT_DIR:INTERNAL=/home/infcomplex/.repos/vcpkg
//linker supports push/pop state
_CMAKE_LINKER_PUSHPOP_STATE_SUPPORTED:INTERNAL=TRUE
//CMAKE_INSTALL_PREFIX during last run
_GNUInstallDirs_LAST_CMAKE_INSTALL_PREFIX:INTERNAL=/home/infcomplex/.repos/vcpkg/packages/sfml_x64-linux/debug
```
</details>

<details><summary>/home/infcomplex/.repos/vcpkg/buildtrees/sfml/config-x64-linux-dbg-CMakeConfigureLog.yaml.log</summary>

```

---
events:
  -
    kind: "message-v1"
    backtrace:
      - "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineSystem.cmake:205 (message)"
      - "CMakeLists.txt:31 (project)"
    message: |
      The system is: Linux -  - x86_64
  -
    kind: "message-v1"
    backtrace:
      - "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineCompilerId.cmake:17 (message)"
      - "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineCompilerId.cmake:64 (__determine_compiler_id_test)"
      - "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineCCompiler.cmake:123 (CMAKE_DETERMINE_COMPILER_ID)"
      - "CMakeLists.txt:31 (project)"
    message: |
      Compiling the C compiler identification source file "CMakeCCompilerId.c" succeeded.
      Compiler: /usr/bin/cc 
      Build flags: -fPIC
      Id flags:  
      
      The output was:
      0
      
      
      Compilation of the C compiler identification source "CMakeCCompilerId.c" produced "a.out"
      
      The C compiler identification is GNU, found in:
        /home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-dbg/CMakeFiles/3.30.1/CompilerIdC/a.out
      
  -
    kind: "message-v1"
    backtrace:
      - "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineCompilerId.cmake:17 (message)"
      - "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineCompilerId.cmake:64 (__determine_compiler_id_test)"
      - "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineCXXCompiler.cmake:126 (CMAKE_DETERMINE_COMPILER_ID)"
      - "CMakeLists.txt:31 (project)"
    message: |
      Compiling the CXX compiler identification source file "CMakeCXXCompilerId.cpp" succeeded.
      Compiler: /usr/bin/c++ 
      Build flags: -fPIC
      Id flags:  
      
      The output was:
      0
      
      
      Compilation of the CXX compiler identification source "CMakeCXXCompilerId.cpp" produced "a.out"
      
      The CXX compiler identification is GNU, found in:
        /home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-dbg/CMakeFiles/3.30.1/CompilerIdCXX/a.out
      
  -
    kind: "try_compile-v1"
    backtrace:
      - "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineCompilerABI.cmake:74 (try_compile)"
      - "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeTestCCompiler.cmake:26 (CMAKE_DETERMINE_COMPILER_ABI)"
      - "CMakeLists.txt:31 (project)"
    checks:
      - "Detecting C compiler ABI info"
    directories:
      source: "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-dbg/CMakeFiles/CMakeScratch/TryCompile-O9ZC0W"
      binary: "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-dbg/CMakeFiles/CMakeScratch/TryCompile-O9ZC0W"
    cmakeVariables:
      CMAKE_C_FLAGS: "-fPIC"
      CMAKE_C_FLAGS_DEBUG: "-g"
      CMAKE_EXE_LINKER_FLAGS: ""
      CMAKE_OSX_DEPLOYMENT_TARGET: "13.0"
      CMAKE_USER_MAKE_RULES_OVERRIDE: "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/src/2.6.2-8c34997038.clean/cmake/CompilerOptionsOverride.cmake"
      VCPKG_CHAINLOAD_TOOLCHAIN_FILE: "/home/infcomplex/.repos/vcpkg/scripts/toolchains/linux.cmake"
      VCPKG_CRT_LINKAGE: "dynamic"
      VCPKG_CXX_FLAGS: ""
      VCPKG_CXX_FLAGS_DEBUG: ""
      VCPKG_CXX_FLAGS_RELEASE: ""
      VCPKG_C_FLAGS: ""
      VCPKG_C_FLAGS_DEBUG: ""
      VCPKG_C_FLAGS_RELEASE: ""
      VCPKG_INSTALLED_DIR: "/home/infcomplex/Documents/dev/cpp/helloworld/build/vcpkg_installed"
      VCPKG_LINKER_FLAGS: ""
      VCPKG_LINKER_FLAGS_DEBUG: ""
      VCPKG_LINKER_FLAGS_RELEASE: ""
...
Skipped 608 lines
...
      - "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/FindX11.cmake:722 (check_function_exists)"
      - "/home/infcomplex/.repos/vcpkg/scripts/buildsystems/vcpkg.cmake:859 (_find_package)"
      - "cmake/Macros.cmake:383 (find_package)"
      - "src/SFML/Window/CMakeLists.txt:294 (sfml_find_package)"
    checks:
      - "Looking for connect"
    directories:
      source: "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-dbg/CMakeFiles/CMakeScratch/TryCompile-wR3PSx"
      binary: "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-dbg/CMakeFiles/CMakeScratch/TryCompile-wR3PSx"
    cmakeVariables:
      CMAKE_C_FLAGS: "-fPIC"
      CMAKE_C_FLAGS_DEBUG: "-g"
      CMAKE_EXE_LINKER_FLAGS: ""
      CMAKE_MODULE_PATH: "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/src/2.6.2-8c34997038.clean/cmake/Modules/;/home/infcomplex/.repos/vcpkg/buildtrees/sfml/src/2.6.2-8c34997038.clean/cmake/Modules/"
      CMAKE_OSX_DEPLOYMENT_TARGET: "13.0"
      CMAKE_USER_MAKE_RULES_OVERRIDE: "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/src/2.6.2-8c34997038.clean/cmake/CompilerOptionsOverride.cmake"
      VCPKG_CHAINLOAD_TOOLCHAIN_FILE: "/home/infcomplex/.repos/vcpkg/scripts/toolchains/linux.cmake"
      VCPKG_CRT_LINKAGE: "dynamic"
      VCPKG_CXX_FLAGS: ""
      VCPKG_CXX_FLAGS_DEBUG: ""
      VCPKG_CXX_FLAGS_RELEASE: ""
      VCPKG_C_FLAGS: ""
      VCPKG_C_FLAGS_DEBUG: ""
      VCPKG_C_FLAGS_RELEASE: ""
      VCPKG_INSTALLED_DIR: "/home/infcomplex/Documents/dev/cpp/helloworld/build/vcpkg_installed"
      VCPKG_LINKER_FLAGS: ""
      VCPKG_LINKER_FLAGS_DEBUG: ""
      VCPKG_LINKER_FLAGS_RELEASE: ""
      VCPKG_PREFER_SYSTEM_LIBS: "OFF"
      VCPKG_TARGET_ARCHITECTURE: "x64"
      VCPKG_TARGET_TRIPLET: "x64-linux"
      Z_VCPKG_ROOT_DIR: "/home/infcomplex/.repos/vcpkg"
    buildResult:
      variable: "CMAKE_HAVE_CONNECT"
      cached: true
      stdout: |
        Change Dir: '/home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-dbg/CMakeFiles/CMakeScratch/TryCompile-wR3PSx'
        
        Run Build Command(s): /home/infcomplex/.repos/vcpkg/downloads/tools/ninja/1.10.2-linux/ninja -v cmTC_781d5
        [1/2] /usr/bin/cc   -fPIC -DCHECK_FUNCTION_EXISTS=connect -o CMakeFiles/cmTC_781d5.dir/CheckFunctionExists.c.o -c /home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-dbg/CMakeFiles/CMakeScratch/TryCompile-wR3PSx/CheckFunctionExists.c
        [2/2] : && /usr/bin/cc -fPIC -DCHECK_FUNCTION_EXISTS=connect  CMakeFiles/cmTC_781d5.dir/CheckFunctionExists.c.o -o cmTC_781d5   && :
        
      exitCode: 0
  -
    kind: "try_compile-v1"
    backtrace:
      - "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CheckFunctionExists.cmake:86 (try_compile)"
      - "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/FindX11.cmake:731 (check_function_exists)"
      - "/home/infcomplex/.repos/vcpkg/scripts/buildsystems/vcpkg.cmake:859 (_find_package)"
      - "cmake/Macros.cmake:383 (find_package)"
      - "src/SFML/Window/CMakeLists.txt:294 (sfml_find_package)"
    checks:
      - "Looking for remove"
    directories:
      source: "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-dbg/CMakeFiles/CMakeScratch/TryCompile-QJOI6q"
      binary: "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-dbg/CMakeFiles/CMakeScratch/TryCompile-QJOI6q"
    cmakeVariables:
      CMAKE_C_FLAGS: "-fPIC"
      CMAKE_C_FLAGS_DEBUG: "-g"
      CMAKE_EXE_LINKER_FLAGS: ""
      CMAKE_MODULE_PATH: "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/src/2.6.2-8c34997038.clean/cmake/Modules/;/home/infcomplex/.repos/vcpkg/buildtrees/sfml/src/2.6.2-8c34997038.clean/cmake/Modules/"
      CMAKE_OSX_DEPLOYMENT_TARGET: "13.0"
      CMAKE_USER_MAKE_RULES_OVERRIDE: "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/src/2.6.2-8c34997038.clean/cmake/CompilerOptionsOverride.cmake"
      VCPKG_CHAINLOAD_TOOLCHAIN_FILE: "/home/infcomplex/.repos/vcpkg/scripts/toolchains/linux.cmake"
      VCPKG_CRT_LINKAGE: "dynamic"
      VCPKG_CXX_FLAGS: ""
      VCPKG_CXX_FLAGS_DEBUG: ""
      VCPKG_CXX_FLAGS_RELEASE: ""
      VCPKG_C_FLAGS: ""
      VCPKG_C_FLAGS_DEBUG: ""
      VCPKG_C_FLAGS_RELEASE: ""
      VCPKG_INSTALLED_DIR: "/home/infcomplex/Documents/dev/cpp/helloworld/build/vcpkg_installed"
      VCPKG_LINKER_FLAGS: ""
      VCPKG_LINKER_FLAGS_DEBUG: ""
      VCPKG_LINKER_FLAGS_RELEASE: ""
      VCPKG_PREFER_SYSTEM_LIBS: "OFF"
      VCPKG_TARGET_ARCHITECTURE: "x64"
      VCPKG_TARGET_TRIPLET: "x64-linux"
      Z_VCPKG_ROOT_DIR: "/home/infcomplex/.repos/vcpkg"
    buildResult:
      variable: "CMAKE_HAVE_REMOVE"
      cached: true
      stdout: |
        Change Dir: '/home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-dbg/CMakeFiles/CMakeScratch/TryCompile-QJOI6q'
        
        Run Build Command(s): /home/infcomplex/.repos/vcpkg/downloads/tools/ninja/1.10.2-linux/ninja -v cmTC_44728
        [1/2] /usr/bin/cc   -fPIC -DCHECK_FUNCTION_EXISTS=remove -o CMakeFiles/cmTC_44728.dir/CheckFunctionExists.c.o -c /home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-dbg/CMakeFiles/CMakeScratch/TryCompile-QJOI6q/CheckFunctionExists.c
        [2/2] : && /usr/bin/cc -fPIC -DCHECK_FUNCTION_EXISTS=remove  CMakeFiles/cmTC_44728.dir/CheckFunctionExists.c.o -o cmTC_44728   && :
        
      exitCode: 0
  -
    kind: "try_compile-v1"
    backtrace:
      - "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CheckFunctionExists.cmake:86 (try_compile)"
      - "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/FindX11.cmake:740 (check_function_exists)"
      - "/home/infcomplex/.repos/vcpkg/scripts/buildsystems/vcpkg.cmake:859 (_find_package)"
      - "cmake/Macros.cmake:383 (find_package)"
      - "src/SFML/Window/CMakeLists.txt:294 (sfml_find_package)"
    checks:
      - "Looking for shmat"
    directories:
      source: "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-dbg/CMakeFiles/CMakeScratch/TryCompile-TbuQ7k"
      binary: "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-dbg/CMakeFiles/CMakeScratch/TryCompile-TbuQ7k"
    cmakeVariables:
      CMAKE_C_FLAGS: "-fPIC"
      CMAKE_C_FLAGS_DEBUG: "-g"
      CMAKE_EXE_LINKER_FLAGS: ""
      CMAKE_MODULE_PATH: "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/src/2.6.2-8c34997038.clean/cmake/Modules/;/home/infcomplex/.repos/vcpkg/buildtrees/sfml/src/2.6.2-8c34997038.clean/cmake/Modules/"
      CMAKE_OSX_DEPLOYMENT_TARGET: "13.0"
      CMAKE_USER_MAKE_RULES_OVERRIDE: "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/src/2.6.2-8c34997038.clean/cmake/CompilerOptionsOverride.cmake"
      VCPKG_CHAINLOAD_TOOLCHAIN_FILE: "/home/infcomplex/.repos/vcpkg/scripts/toolchains/linux.cmake"
      VCPKG_CRT_LINKAGE: "dynamic"
      VCPKG_CXX_FLAGS: ""
      VCPKG_CXX_FLAGS_DEBUG: ""
      VCPKG_CXX_FLAGS_RELEASE: ""
      VCPKG_C_FLAGS: ""
      VCPKG_C_FLAGS_DEBUG: ""
      VCPKG_C_FLAGS_RELEASE: ""
      VCPKG_INSTALLED_DIR: "/home/infcomplex/Documents/dev/cpp/helloworld/build/vcpkg_installed"
      VCPKG_LINKER_FLAGS: ""
      VCPKG_LINKER_FLAGS_DEBUG: ""
      VCPKG_LINKER_FLAGS_RELEASE: ""
      VCPKG_PREFER_SYSTEM_LIBS: "OFF"
      VCPKG_TARGET_ARCHITECTURE: "x64"
      VCPKG_TARGET_TRIPLET: "x64-linux"
      Z_VCPKG_ROOT_DIR: "/home/infcomplex/.repos/vcpkg"
    buildResult:
      variable: "CMAKE_HAVE_SHMAT"
      cached: true
      stdout: |
        Change Dir: '/home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-dbg/CMakeFiles/CMakeScratch/TryCompile-TbuQ7k'
        
        Run Build Command(s): /home/infcomplex/.repos/vcpkg/downloads/tools/ninja/1.10.2-linux/ninja -v cmTC_ea0dc
        [1/2] /usr/bin/cc   -fPIC -DCHECK_FUNCTION_EXISTS=shmat -o CMakeFiles/cmTC_ea0dc.dir/CheckFunctionExists.c.o -c /home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-dbg/CMakeFiles/CMakeScratch/TryCompile-TbuQ7k/CheckFunctionExists.c
        [2/2] : && /usr/bin/cc -fPIC -DCHECK_FUNCTION_EXISTS=shmat  CMakeFiles/cmTC_ea0dc.dir/CheckFunctionExists.c.o -o cmTC_ea0dc   && :
        
      exitCode: 0
...
```
</details>

<details><summary>/home/infcomplex/.repos/vcpkg/buildtrees/sfml/config-x64-linux-rel-CMakeConfigureLog.yaml.log</summary>

```

---
events:
  -
    kind: "message-v1"
    backtrace:
      - "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineSystem.cmake:205 (message)"
      - "CMakeLists.txt:31 (project)"
    message: |
      The system is: Linux -  - x86_64
  -
    kind: "message-v1"
    backtrace:
      - "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineCompilerId.cmake:17 (message)"
      - "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineCompilerId.cmake:64 (__determine_compiler_id_test)"
      - "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineCCompiler.cmake:123 (CMAKE_DETERMINE_COMPILER_ID)"
      - "CMakeLists.txt:31 (project)"
    message: |
      Compiling the C compiler identification source file "CMakeCCompilerId.c" succeeded.
      Compiler: /usr/bin/cc 
      Build flags: -fPIC
      Id flags:  
      
      The output was:
      0
      
      
      Compilation of the C compiler identification source "CMakeCCompilerId.c" produced "a.out"
      
      The C compiler identification is GNU, found in:
        /home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-rel/CMakeFiles/3.30.1/CompilerIdC/a.out
      
  -
    kind: "message-v1"
    backtrace:
      - "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineCompilerId.cmake:17 (message)"
      - "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineCompilerId.cmake:64 (__determine_compiler_id_test)"
      - "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineCXXCompiler.cmake:126 (CMAKE_DETERMINE_COMPILER_ID)"
      - "CMakeLists.txt:31 (project)"
    message: |
      Compiling the CXX compiler identification source file "CMakeCXXCompilerId.cpp" succeeded.
      Compiler: /usr/bin/c++ 
      Build flags: -fPIC
      Id flags:  
      
      The output was:
      0
      
      
      Compilation of the CXX compiler identification source "CMakeCXXCompilerId.cpp" produced "a.out"
      
      The CXX compiler identification is GNU, found in:
        /home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-rel/CMakeFiles/3.30.1/CompilerIdCXX/a.out
      
  -
    kind: "try_compile-v1"
    backtrace:
      - "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineCompilerABI.cmake:74 (try_compile)"
      - "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeTestCCompiler.cmake:26 (CMAKE_DETERMINE_COMPILER_ABI)"
      - "CMakeLists.txt:31 (project)"
    checks:
      - "Detecting C compiler ABI info"
    directories:
      source: "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-rel/CMakeFiles/CMakeScratch/TryCompile-ypCRBm"
      binary: "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-rel/CMakeFiles/CMakeScratch/TryCompile-ypCRBm"
    cmakeVariables:
      CMAKE_C_FLAGS: "-fPIC"
      CMAKE_C_FLAGS_DEBUG: "-g"
      CMAKE_EXE_LINKER_FLAGS: ""
      CMAKE_OSX_DEPLOYMENT_TARGET: "13.0"
      CMAKE_USER_MAKE_RULES_OVERRIDE: "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/src/2.6.2-8c34997038.clean/cmake/CompilerOptionsOverride.cmake"
      VCPKG_CHAINLOAD_TOOLCHAIN_FILE: "/home/infcomplex/.repos/vcpkg/scripts/toolchains/linux.cmake"
      VCPKG_CRT_LINKAGE: "dynamic"
      VCPKG_CXX_FLAGS: ""
      VCPKG_CXX_FLAGS_DEBUG: ""
      VCPKG_CXX_FLAGS_RELEASE: ""
      VCPKG_C_FLAGS: ""
      VCPKG_C_FLAGS_DEBUG: ""
      VCPKG_C_FLAGS_RELEASE: ""
      VCPKG_INSTALLED_DIR: "/home/infcomplex/Documents/dev/cpp/helloworld/build/vcpkg_installed"
      VCPKG_LINKER_FLAGS: ""
      VCPKG_LINKER_FLAGS_DEBUG: ""
      VCPKG_LINKER_FLAGS_RELEASE: ""
...
Skipped 608 lines
...
      - "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/FindX11.cmake:722 (check_function_exists)"
      - "/home/infcomplex/.repos/vcpkg/scripts/buildsystems/vcpkg.cmake:859 (_find_package)"
      - "cmake/Macros.cmake:383 (find_package)"
      - "src/SFML/Window/CMakeLists.txt:294 (sfml_find_package)"
    checks:
      - "Looking for connect"
    directories:
      source: "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-rel/CMakeFiles/CMakeScratch/TryCompile-WcfqVj"
      binary: "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-rel/CMakeFiles/CMakeScratch/TryCompile-WcfqVj"
    cmakeVariables:
      CMAKE_C_FLAGS: "-fPIC"
      CMAKE_C_FLAGS_DEBUG: "-g"
      CMAKE_EXE_LINKER_FLAGS: ""
      CMAKE_MODULE_PATH: "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/src/2.6.2-8c34997038.clean/cmake/Modules/;/home/infcomplex/.repos/vcpkg/buildtrees/sfml/src/2.6.2-8c34997038.clean/cmake/Modules/"
      CMAKE_OSX_DEPLOYMENT_TARGET: "13.0"
      CMAKE_USER_MAKE_RULES_OVERRIDE: "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/src/2.6.2-8c34997038.clean/cmake/CompilerOptionsOverride.cmake"
      VCPKG_CHAINLOAD_TOOLCHAIN_FILE: "/home/infcomplex/.repos/vcpkg/scripts/toolchains/linux.cmake"
      VCPKG_CRT_LINKAGE: "dynamic"
      VCPKG_CXX_FLAGS: ""
      VCPKG_CXX_FLAGS_DEBUG: ""
      VCPKG_CXX_FLAGS_RELEASE: ""
      VCPKG_C_FLAGS: ""
      VCPKG_C_FLAGS_DEBUG: ""
      VCPKG_C_FLAGS_RELEASE: ""
      VCPKG_INSTALLED_DIR: "/home/infcomplex/Documents/dev/cpp/helloworld/build/vcpkg_installed"
      VCPKG_LINKER_FLAGS: ""
      VCPKG_LINKER_FLAGS_DEBUG: ""
      VCPKG_LINKER_FLAGS_RELEASE: ""
      VCPKG_PREFER_SYSTEM_LIBS: "OFF"
      VCPKG_TARGET_ARCHITECTURE: "x64"
      VCPKG_TARGET_TRIPLET: "x64-linux"
      Z_VCPKG_ROOT_DIR: "/home/infcomplex/.repos/vcpkg"
    buildResult:
      variable: "CMAKE_HAVE_CONNECT"
      cached: true
      stdout: |
        Change Dir: '/home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-rel/CMakeFiles/CMakeScratch/TryCompile-WcfqVj'
        
        Run Build Command(s): /home/infcomplex/.repos/vcpkg/downloads/tools/ninja/1.10.2-linux/ninja -v cmTC_120af
        [1/2] /usr/bin/cc   -fPIC -DCHECK_FUNCTION_EXISTS=connect -o CMakeFiles/cmTC_120af.dir/CheckFunctionExists.c.o -c /home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-rel/CMakeFiles/CMakeScratch/TryCompile-WcfqVj/CheckFunctionExists.c
        [2/2] : && /usr/bin/cc -fPIC -DCHECK_FUNCTION_EXISTS=connect  CMakeFiles/cmTC_120af.dir/CheckFunctionExists.c.o -o cmTC_120af   && :
        
      exitCode: 0
  -
    kind: "try_compile-v1"
    backtrace:
      - "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CheckFunctionExists.cmake:86 (try_compile)"
      - "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/FindX11.cmake:731 (check_function_exists)"
      - "/home/infcomplex/.repos/vcpkg/scripts/buildsystems/vcpkg.cmake:859 (_find_package)"
      - "cmake/Macros.cmake:383 (find_package)"
      - "src/SFML/Window/CMakeLists.txt:294 (sfml_find_package)"
    checks:
      - "Looking for remove"
    directories:
      source: "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-rel/CMakeFiles/CMakeScratch/TryCompile-dALMiN"
      binary: "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-rel/CMakeFiles/CMakeScratch/TryCompile-dALMiN"
    cmakeVariables:
      CMAKE_C_FLAGS: "-fPIC"
      CMAKE_C_FLAGS_DEBUG: "-g"
      CMAKE_EXE_LINKER_FLAGS: ""
      CMAKE_MODULE_PATH: "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/src/2.6.2-8c34997038.clean/cmake/Modules/;/home/infcomplex/.repos/vcpkg/buildtrees/sfml/src/2.6.2-8c34997038.clean/cmake/Modules/"
      CMAKE_OSX_DEPLOYMENT_TARGET: "13.0"
      CMAKE_USER_MAKE_RULES_OVERRIDE: "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/src/2.6.2-8c34997038.clean/cmake/CompilerOptionsOverride.cmake"
      VCPKG_CHAINLOAD_TOOLCHAIN_FILE: "/home/infcomplex/.repos/vcpkg/scripts/toolchains/linux.cmake"
      VCPKG_CRT_LINKAGE: "dynamic"
      VCPKG_CXX_FLAGS: ""
      VCPKG_CXX_FLAGS_DEBUG: ""
      VCPKG_CXX_FLAGS_RELEASE: ""
      VCPKG_C_FLAGS: ""
      VCPKG_C_FLAGS_DEBUG: ""
      VCPKG_C_FLAGS_RELEASE: ""
      VCPKG_INSTALLED_DIR: "/home/infcomplex/Documents/dev/cpp/helloworld/build/vcpkg_installed"
      VCPKG_LINKER_FLAGS: ""
      VCPKG_LINKER_FLAGS_DEBUG: ""
      VCPKG_LINKER_FLAGS_RELEASE: ""
      VCPKG_PREFER_SYSTEM_LIBS: "OFF"
      VCPKG_TARGET_ARCHITECTURE: "x64"
      VCPKG_TARGET_TRIPLET: "x64-linux"
      Z_VCPKG_ROOT_DIR: "/home/infcomplex/.repos/vcpkg"
    buildResult:
      variable: "CMAKE_HAVE_REMOVE"
      cached: true
      stdout: |
        Change Dir: '/home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-rel/CMakeFiles/CMakeScratch/TryCompile-dALMiN'
        
        Run Build Command(s): /home/infcomplex/.repos/vcpkg/downloads/tools/ninja/1.10.2-linux/ninja -v cmTC_a705c
        [1/2] /usr/bin/cc   -fPIC -DCHECK_FUNCTION_EXISTS=remove -o CMakeFiles/cmTC_a705c.dir/CheckFunctionExists.c.o -c /home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-rel/CMakeFiles/CMakeScratch/TryCompile-dALMiN/CheckFunctionExists.c
        [2/2] : && /usr/bin/cc -fPIC -DCHECK_FUNCTION_EXISTS=remove  CMakeFiles/cmTC_a705c.dir/CheckFunctionExists.c.o -o cmTC_a705c   && :
        
      exitCode: 0
  -
    kind: "try_compile-v1"
    backtrace:
      - "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CheckFunctionExists.cmake:86 (try_compile)"
      - "/home/infcomplex/.repos/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/FindX11.cmake:740 (check_function_exists)"
      - "/home/infcomplex/.repos/vcpkg/scripts/buildsystems/vcpkg.cmake:859 (_find_package)"
      - "cmake/Macros.cmake:383 (find_package)"
      - "src/SFML/Window/CMakeLists.txt:294 (sfml_find_package)"
    checks:
      - "Looking for shmat"
    directories:
      source: "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-rel/CMakeFiles/CMakeScratch/TryCompile-WDBV1k"
      binary: "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-rel/CMakeFiles/CMakeScratch/TryCompile-WDBV1k"
    cmakeVariables:
      CMAKE_C_FLAGS: "-fPIC"
      CMAKE_C_FLAGS_DEBUG: "-g"
      CMAKE_EXE_LINKER_FLAGS: ""
      CMAKE_MODULE_PATH: "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/src/2.6.2-8c34997038.clean/cmake/Modules/;/home/infcomplex/.repos/vcpkg/buildtrees/sfml/src/2.6.2-8c34997038.clean/cmake/Modules/"
      CMAKE_OSX_DEPLOYMENT_TARGET: "13.0"
      CMAKE_USER_MAKE_RULES_OVERRIDE: "/home/infcomplex/.repos/vcpkg/buildtrees/sfml/src/2.6.2-8c34997038.clean/cmake/CompilerOptionsOverride.cmake"
      VCPKG_CHAINLOAD_TOOLCHAIN_FILE: "/home/infcomplex/.repos/vcpkg/scripts/toolchains/linux.cmake"
      VCPKG_CRT_LINKAGE: "dynamic"
      VCPKG_CXX_FLAGS: ""
      VCPKG_CXX_FLAGS_DEBUG: ""
      VCPKG_CXX_FLAGS_RELEASE: ""
      VCPKG_C_FLAGS: ""
      VCPKG_C_FLAGS_DEBUG: ""
      VCPKG_C_FLAGS_RELEASE: ""
      VCPKG_INSTALLED_DIR: "/home/infcomplex/Documents/dev/cpp/helloworld/build/vcpkg_installed"
      VCPKG_LINKER_FLAGS: ""
      VCPKG_LINKER_FLAGS_DEBUG: ""
      VCPKG_LINKER_FLAGS_RELEASE: ""
      VCPKG_PREFER_SYSTEM_LIBS: "OFF"
      VCPKG_TARGET_ARCHITECTURE: "x64"
      VCPKG_TARGET_TRIPLET: "x64-linux"
      Z_VCPKG_ROOT_DIR: "/home/infcomplex/.repos/vcpkg"
    buildResult:
      variable: "CMAKE_HAVE_SHMAT"
      cached: true
      stdout: |
        Change Dir: '/home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-rel/CMakeFiles/CMakeScratch/TryCompile-WDBV1k'
        
        Run Build Command(s): /home/infcomplex/.repos/vcpkg/downloads/tools/ninja/1.10.2-linux/ninja -v cmTC_e4337
        [1/2] /usr/bin/cc   -fPIC -DCHECK_FUNCTION_EXISTS=shmat -o CMakeFiles/cmTC_e4337.dir/CheckFunctionExists.c.o -c /home/infcomplex/.repos/vcpkg/buildtrees/sfml/x64-linux-rel/CMakeFiles/CMakeScratch/TryCompile-WDBV1k/CheckFunctionExists.c
        [2/2] : && /usr/bin/cc -fPIC -DCHECK_FUNCTION_EXISTS=shmat  CMakeFiles/cmTC_e4337.dir/CheckFunctionExists.c.o -o cmTC_e4337   && :
        
      exitCode: 0
...
```
</details>

**Additional context**

<details><summary>vcpkg.json</summary>

```
{
  "dependencies": [
    "fmt",
    {
      "name": "sfml",
      "features": [
        "network"
      ]
    }
  ]
}

```
</details>
