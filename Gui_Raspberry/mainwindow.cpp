#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "app/task_digital_device.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->timer_counter = new QTimer(this);
    this->timer_counter->setInterval(1000);
    connect(this->timer_counter,SIGNAL(timeout()),this,SLOT(update_state(bool)));
    connect(this,SIGNAL(changed_state(bool)),ui->lineEdit,SLOT(setText(QString)));

    mainAk = new ak();
    connect(this,SIGNAL(destroyed()),mainAk,SLOT(deleteLater()));
    mainAk->start(QThread::TimeCriticalPriority);


    //connect(this,SLOT()
    //QMetaObject::invokeMethod()
  //  connect
   // QMetaObject::invokeMethod(this,SLOT(on_btn_init_gateway_clicked()),Qt::QueuedConnection);
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

void MainWindow::update_state(bool state)
{
    state = isDataReceived;
    emit changed_state(state);
}
