# qt6_vscode_mulitsystem_demo


# Environment Setup
## Window11

1. Modify `PATH`
    
    Add New Variable:
    ```
    Qt_KIT_DIR=C:\Qt\6.5.3\mingw_64
    Qt_DIR=C:\Qt
    MinGW_PATH=C:\Qt\Tools\mingw1120_64
    ```

    PATH中添加e.g.
    ```
    C:\Qt\Tools\CMake_64\bin
    C:\Qt\Tools\mingw1120_64\bin
    C:\Qt\6.5.3\mingw_64\bin
    C:\Qt\6.5.3\mingw_64
    ```

    验证环境
    打开CMD，依次输入
    ```
    cmake --version
    g++ --version
    ```

2. Install and config VSCode plugins

    1. Qt tool, for open QDesigher etc.
    2. Qt Configure
        - Mingw Path: e.g. `C:\Qt\Tools\mingw1120_64`
        - Qt Dir: e.g. `C:\Qt`
        - Qt Kit Dir: e.g. `C:\Qt\6.5.3\mingw_64`
    3. C++
    4. cmake
        - config Cmake Path, e.g. `C:\Qt\Tools\CMake_64\bin\cmake.exe`

3. 

## Linux

