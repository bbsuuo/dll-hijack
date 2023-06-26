# dll-hijack
[![Build status](https://ci.appveyor.com/api/projects/status/a7hr2delcaiabnom?svg=true)](https://ci.appveyor.com/project/myfreeer/dll-hijack)

DLL hijack codes for cmake on windows.

## Usage
### Compile
Requirements: cmake, mingw gcc, ninja.
Use code below or simply run `./build.sh`

```bash
mkdir build
cd build
cmake -GNinja ..
ninja
```

### Generate code for existing system dll
Requirements: bash (msys2), gendef (mingw)

1. Run `gen_code.sh ${name}.dll`
2. Modify `${name}.c` with codes you want to execute when dll attached or detached.
3. Compile (check previous part)

## Credits
* <https://github.com/shuax/GreenChrome>
* <https://github.com/processhacker/phnt>
* <https://github.com/reactos/reactos>
* <https://www.winehq.org/>

安装步骤:
//https://blog.csdn.net/weixin_64064486/article/details/123940266
1.安装mingw: https://sourceforge.net/projects/mingw/ 
2.安装gcc mingw-get install gcc    //可额外安装mingw-get install g++  或者mingw-get install gdb        以上步骤都要配置环境变量 
3.安装ninja
4.安装cmake
5.mkdir build
6.cd build
7.cmake -GNinja ..
8.ninja  //或者ninja > build.log 2>&1 输出到日志