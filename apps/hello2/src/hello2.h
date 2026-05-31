#pragma once

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Form; } // 前置声明 UI 命名空间里的类
QT_END_NAMESPACE

class Hello2 : public QWidget {
    Q_OBJECT

public:
    explicit Hello2(QWidget* parent = nullptr);
    ~Hello2(); // 增加析构函数释放 ui

private:
    Ui::Form *ui; // 界面指针
};
