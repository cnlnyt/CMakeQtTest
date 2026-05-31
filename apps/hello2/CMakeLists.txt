# 1. 收集当前项目的所有源文件
set(HELLO2_SOURCES
    src/main.cpp
    src/hello2.cpp
    src/hello2.h
    res.qrc
    src/hello2.ui
)

# 2. 生成名为 hello2 的可执行程序 (WIN32 参数用于 Windows 下隐藏终端黑框)
add_executable(hello2
    WIN32
    ${HELLO2_SOURCES}
)

# 3. 链接 Qt5 的界面库 (Widgets)
target_link_libraries(hello2 PRIVATE Qt5::Widgets)
