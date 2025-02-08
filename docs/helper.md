# helper

## 目录结构
- build
  - 设置cmake在debug和release模式下的build directory
- include
- src
- docs

## CMakeList.txt
- 类似于java的maven，用来管理源文件和依赖，在链接的时候，将依赖的.so文件（共享文件）和.a（静态文件）文件与当前文件进行合并，生成可执行文件
- include_directories，aux_source_directory等的使用，被CMakeList管理的文件，左上角会出现一个蓝色的小方块

## 编译
- 针对linux和macos
```
shell
cd build
cmake .. #生成可执行文件xxx
./xxx    #执行可执行文件
```
