#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <ak/ak.h>

#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
signals:
    void changed_state(bool state_device);

private slots:
    void on_btn_init_gateway_clicked();

    void on_btn_wait_device_register_clicked();

    void on_btn_light_1_clicked();

    void update_state(bool state);

private:
    Ui::MainWindow *ui;
    ak* mainAk;
    QTimer * timer_counter;
};

#endif // MAINWINDOW_H
