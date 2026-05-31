# 1. 收集当前项目的所有源文件
set(HELLO_SOURCES
    src/main.cpp
    src/hello.cpp
    src/hello.h
    src/hello.ui
)

# 2. 生成名为 hello 的可执行程序 (WIN32 参数用于 Windows 下隐藏终端黑框)
add_executable(hello
    WIN32
    ${HELLO_SOURCES}
)

# 3. 链接 Qt5 的界面库 (Widgets)
target_link_libraries(hello PRIVATE Qt5::Widgets)
