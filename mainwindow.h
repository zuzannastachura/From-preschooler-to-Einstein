#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <dialog1.h>
#include"mydialog.h"
#include "dialog3.h"
#include "dialog2.h"
#include "dialog4.h"
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

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;
    Dialog1 *MDialog1;
    MyDialog *Dialog;
    Dialog3 *MDialog3;
    Dialog2 *MDialog;
    Dialog4 *MDialog4;
};

#endif // MAINWINDOW_H
