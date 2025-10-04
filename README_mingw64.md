# MINGW64 general information

## Necessary packages
This library has been compiled on MINGW64 by installing MSYS2 and running on MINGW64 platform.
Those packaeges have been installed with pacman:

### System/compilation packages
```
pacman -S git
pacman -S mingw-w64-x86_64-toolchain
pacman -S mingw-w64-x86_64-cmake
pacman -S mingw-w64-x86_64-meson
```

### Application/library packages
```
pacman -S mingw-w64-x86_64-abseil-cpp
pacman -S mingw-w64-x86_64-SDL
pacman -S mingw-w64-x86_64-ffmpeg
pacman -S mingw-w64-x86_64-angleproject
```

### Compilation

The standard process to compile is to first setup the project, then ask the compilation
```
meson setup ./builddir_msys
meson compile -C ./builddir_msys
```

### Launch the test app

```
export OPENHD_PROPERTIES_PATH=`pwd`/conf
./builddir_msys/test_rtp.exe
```
 