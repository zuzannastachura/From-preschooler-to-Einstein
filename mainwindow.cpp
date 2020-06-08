#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mywidget.h"
#include <QMouseEvent>
#include "mygreenwidget.h"
#include <QKeySequence>
#include "mydialog.h"
#include<QMessageBox>
#include "dialog3.h"
#include "dialog2.h"
#include "dialog4.h"
#include <QMouseEvent>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    MDialog1 = new Dialog1(this);
    MDialog1->show();

}
void MainWindow::on_pushButton_2_clicked()
{

    Dialog = new MyDialog(this);
    Dialog->show();

}

void MainWindow::on_pushButton_3_clicked()
{
   MDialog3=new Dialog3(this);
   MDialog3->show();
}

void MainWindow::on_pushButton_4_clicked()
{
 MDialog = new Dialog2(this);
MDialog -> show();
}

void MainWindow::on_pushButton_5_clicked()
{
    MDialog4 = new Dialog4(this);
   MDialog4 -> show();
}
