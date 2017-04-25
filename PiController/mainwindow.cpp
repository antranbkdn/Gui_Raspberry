#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QDebug>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <pthread.h>
#include <string.h>
#include <signal.h>

#include "ak/ak.h"
#include "ak/ak_dbg.h"
#include "ak/message.h"

#include "sys/sys_dbg.h"

#include "app/task_list.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mainAk = new ak();
    connect(this,SIGNAL(destroyed()),mainAk,SLOT(deleteLater()));
    mainAk->start(QThread::TimeCriticalPriority);
  //  connect(this, SIGNAL(progress()),mainAk,SLOT(transmit()));
    connect(mainAk,SIGNAL(progress_changed(uint32_t)),ui->label,SLOT(raise())); //edited code
   // connect(ui->pushAction,SIGNAL(pr))
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

    mainAk->sendData();//lien ket toi code phan cung
}

void MainWindow::on_pushButton_2_clicked()
{
   qDebug()<<"chao ban";
}

void MainWindow::on_pushButton_3_clicked()
{
//    pm = new Thread();
//    pm->start();
}

void MainWindow::on_pushAction_clicked()
{
    QString id_device = ui->lineEdit->text();
    emit progress(id_device);

}
