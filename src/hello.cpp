#include "hello.h"

hello::hello(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui_hello)
{
    ui->setupUi(this);
    timer = new QTimer(this); // 创建定时器对象
    connect(timer, &QTimer::timeout, this, &hello::onTimeout);
    connect(ui->pBtn_open, &QPushButton::clicked, this, &hello::pBtn_open_clicked);
    connect(ui->pBtn_close, &QPushButton::clicked, this, &hello::pBtn_close_clicked);
    connect(ui->pBtn_begin, &QPushButton::clicked, this, &hello::pBtn_begin_clicked);
    count = 0; // 初始化计数器
}

hello::~hello()
{
    delete ui; 
}
//打开按钮点击槽函数
void hello::pBtn_open_clicked()
{
    ui->label->setText("打开按钮被点击了");
}
//关闭按钮点击槽函数
void hello::pBtn_close_clicked()
{
    ui->label->setText("关闭按钮被点击了");
}
//点击打开按钮后，启动定时器
void hello::pBtn_begin_clicked()
{
    if(ui->pBtn_begin->text().remove(" ") == "开始") { 
        timer->start(100); // 启动定时器，每隔1秒触发一次
        ui->pBtn_begin->setText("关 闭");
    } else {
        timer->stop(); // 停止定时器
        ui->pBtn_begin->setText("开 始");
    }
    
}
//定时器超时槽函数
void hello::onTimeout()
{
    count = (count + 1) % 256; // 计数器加1，保持在0~255范围内
    ui->lcdNumber->display(count); // 在LCD显示器上显示当前计数值
}
