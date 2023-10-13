# qt6_vscode_mulitsystem_demo


# Environment Setup
## Windows 11

1. Modify `PATH`
    
    Add New Variable:
    ```
    Qt_KIT_DIR=C:\Qt\6.5.3\mingw_64
    Qt_DIR=C:\Qt
    MinGW_PATH=C:\Qt\Tools\mingw1120_64
    ```

    Add to PATH e.g.
    ```
    C:\Qt\Tools\CMake_64\bin
    C:\Qt\Tools\mingw1120_64\bin
    C:\Qt\6.5.3\mingw_64\bin
    C:\Qt\6.5.3\mingw_64
    ```

    Verify it

    open CMD，execute one by one
    ```
    cmake --version
    g++ --version
    ```

2. Install and config VSCode plugins

    1. Qt tool: for open QDesigher etc.
    2. Qt Configure: for config and new projects etc.
        - Mingw Path: e.g `${env:MinGW_PATH}`
        - Qt Dir: e.g. `${env:Qt_DIR}`
        - Qt Kit Dir: e.g `${env:Qt_KIT_DIR}`
    3. C/C++
    4. Cmake Tool
        - Cmake Path, e.g `C:\Qt\Tools\CMake_64\bin\cmake.exe`
        - Build Directory: `${workspaceFolder}/build-windows`

3. Result

    - Successfully build .exe file and execute it by debug(F5).
    - Successfully build .exe file and execute it by `cmake -B build-windows` and `cmake --build build-windows`
    - issues:
        - Executing .exe in some powershell terminal(i.e CMake/Build) results nothing while executing in status bar, but can execute it in other terminals e.g cmd, powershell, git etc.

## Linux


1. Add `Qt_KIT_DIR`
    
    Add New Variable:
    ```
    Qt_KIT_DIR=/usr/local/Qt-6.5.3
    ```

    Verify it

    open CMD，execute one by one
    ```
    echo $Qt_KIT_DIR
    cmake --version
    g++ --version
    ```

2. Install and config VSCode plugins

    1. Qt tool: for open QDesigher etc. (failed in Linux)
    2. Qt Configure: for config and new projects etc.
    3. C/C++
    4. Cmake Tool
        - Build Directory: `${workspaceFolder}/build-windows`

3. Result
    - Debug(F5): Successfully build .exe file and execute it. 
    - Tool Bar Build: Successfully build .exe file and execute it. 
    - CLI: Successfully build .exe file and execute it by `cmake -B build-linux` and `cmake --build build-linux`.
