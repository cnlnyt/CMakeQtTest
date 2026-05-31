cmake_minimum_required(VERSION 3.10)
project(QtPractice LANGUAGES CXX)

# 配置 Qt 开发包路径 (重要：换电脑/环境需修改此处)
set(CMAKE_PREFIX_PATH "D:/Qt/Qt5.14.2/5.14.2/mingw73_64")

# 开启 Qt 核心构建特性 (处理 ui / 宏 / 资源文件必需)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

# 解决 MSVC 编译下中文乱码问题 (MinGW 环境则忽略)
add_compile_options("$<$<C_COMPILER_ID:MSVC>:/utf-8>")
add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")

# 管理子项目日志：每次新增练习工程，在下方添加即可
add_subdirectory(apps/hello)
add_subdirectory(apps/hello2)