#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mainAk = new ak();
    connect(this,SIGNAL(destroyed()),mainAk,SLOT(deleteLater()));
    mainAk->start(QThread::TimeCriticalPriority);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_init_gateway_clicked()
{
    mainAk->Init_gateway();
}

void MainWindow::on_btn_wait_device_register_clicked()
{
    mainAk->Wait_Device_Register();
}

void MainWindow::on_btn_light_1_clicked()
{

}
