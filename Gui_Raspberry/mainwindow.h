#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <ak/ak.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btn_init_gateway_clicked();

    void on_btn_wait_device_register_clicked();

    void on_btn_light_1_clicked();

private:
    Ui::MainWindow *ui;
    ak* mainAk;
};

#endif // MAINWINDOW_H
