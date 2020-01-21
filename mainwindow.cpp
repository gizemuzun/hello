#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_hello_kitty,SIGNAL(clicked()),this,SLOT(hello_kitty_yakala()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnHello_clicked()
{

        static int count = 0;
        QString strCount;

        // display text message in first label
        ui->lblHello->setText("Hello, world!");

        // display button clicked count in second label
        count++;
        strCount.sprintf("%d", count);
        ui->lblCount->setText(strCount);

}
void MainWindow::hello_kitty_yakala(){
    ui->lblHello->setText("Hello canım!");

    static int count = 0;
    count++;

    ui->lblCount->setText(QString("%1").arg(count));

}
