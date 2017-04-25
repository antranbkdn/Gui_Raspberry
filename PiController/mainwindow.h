#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <ak/ak.h>
#include <thread.h>

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
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushAction_clicked();
    void progress(int id_device);

private:
    Ui::MainWindow *ui;
    ak *mainAk;// edited by Phuong

};

#endif // MAINWINDOW_H
