#pragma once
#include "ui_hello.h"
#include <QMainWindow>
#include <QTimer>
//#include <QPushButton>
class hello : public QMainWindow {
    Q_OBJECT
    
public:
    hello(QWidget* parent = nullptr);
    ~hello();
private slots:
    void onTimeout(); // 定时器超时槽函数
    void pBtn_begin_clicked(); // 打开按钮点击槽函数
    void pBtn_open_clicked(); // 打开按钮点击槽函数
    void pBtn_close_clicked(); // 关闭按钮点击槽函数

private:
    Ui_hello* ui;
    QTimer* timer; // 定时器指针
    int count; // 计数器,0 0~255
};