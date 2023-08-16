# Windows C/C++ DLL Example

Minimal example of how to create dynamic link libraries in Windows using C or C++ with CMake and MSVC or Clang/LLVM. <br>

### Build:
- Clone the repository with `git clone https://github.com/cjens00/dll-example dllexample`
- Change directories to dllexample `cd dllexample`
- Create a build directory (optional) `mkdir build` and navigate to the folder `cd build`
- Run CMake on the root folder (up one directory if you are in /build) `cmake ..`
- Build with `cmake --build .`
- Place hellodll.dll in the same folder as client-app.exe.
- Launch the client app `./client-app.exe`
- You should see the output `Hello, world! From hellolib (DLL).`
