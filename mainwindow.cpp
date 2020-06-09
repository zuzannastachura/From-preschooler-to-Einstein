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

int language =0;
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

void MainWindow::on_English_clicked()
{
    language=0;
    ui->label->setStyleSheet("font-size:16pt");
    ui->label->setAlignment(Qt::AlignCenter);
    ui->label->setText("From preschooler to Einstein");
    ui->pushButton->setText("Exercise 1");
    ui->pushButton_2->setText("Exercise 2");
    ui->pushButton_3->setText("Exercise 3");
    ui->pushButton_4->setText("Exercise 4");
    ui->pushButton_5->setText("Exercise 5");
}

void MainWindow::on_Polski_clicked()
{
    language=1;
    ui->label->setStyleSheet("font-size:16pt");
    ui->label->setAlignment(Qt::AlignCenter);
    ui->label->setText("Od przedszkolaka do Einsteina");
    ui->pushButton->setText("Zadanie 1");
    ui->pushButton_2->setText("Zadanie 2");
    ui->pushButton_3->setText("Zadanie 3");
    ui->pushButton_4->setText("Zadanie 4");
    ui->pushButton_5->setText("Zadanie 5");
}

void MainWindow::on_Deutsch_clicked()
{
    language=2;
    ui->label->setStyleSheet("font-size:16pt");
    ui->label->setAlignment(Qt::AlignCenter);
    ui->label->setText("Vom Vorschulkind zum Einstein");
    ui->pushButton->setText("Aufgabe 1");
    ui->pushButton_2->setText("Aufgabe 2");
    ui->pushButton_3->setText("Aufgabe 3");
    ui->pushButton_4->setText("Aufgabe 4");
    ui->pushButton_5->setText("Aufgabe 5");
}
