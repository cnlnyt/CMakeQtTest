#include "hello2.h"
#include "ui_hello2.h" // 包含自动生成的 ui 头文件
#include <QIcon>

Hello2::Hello2(QWidget* parent)
    : QWidget(parent), ui(new Ui::Form)
{
    ui->setupUi(this); // 读取 ui 文件并渲染界面
    
    setWindowIcon(QIcon(":/images/chihu.png"));

    ui->label->setPixmap(QPixmap(":/images/chihu.png"));
}

Hello2::~Hello2()
{
    delete ui; // 释放 UI
}
