#include "dialog4.h"
#include "ui_dialog4.h"
#include <QProgressBar>
#include <QMessageBox>

int value3=0;

Dialog4::Dialog4(QWidget *parent) :
    QDialog(parent),

    ui(new Ui::Dialog4)
{
    ui->setupUi(this);
    ui->progressBar->setMinimum(0);
    ui->progressBar->setValue(value3);
    ui->progressBar->setStyleSheet("background-color: grey;");
}
void Dialog4::on_pushButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"I","A convex shape curves outwards.",QMessageBox::Yes| QMessageBox::No);
    if(reply==QMessageBox::Yes)
    {
        QMessageBox::information(this,"good_answer", "Well done! A convex shape curves outwards.");
        ui->pushButton->setStyleSheet("background-color: green;");
    }
    else
    {
        QMessageBox::information(this,"wrong_answer", "No! A convex shape curves outwards.");
        ui->pushButton->setStyleSheet("background-color: red;");

    }
    ui->progressBar->setValue(value3+20);
    value3+=20;
}


void Dialog4::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"II","A googol is bigger than a billion. ",QMessageBox::Yes| QMessageBox::No);
    if(reply==QMessageBox::Yes)
    {
        QMessageBox::information(this,"good_answer","Well done!A googol is bigger than a billion.");
        ui->pushButton_2->setStyleSheet("background-color: green;");

    }
    else
    {
        QMessageBox::information(this,"wrong_answer", "No! A googol is bigger than a billion.");
        ui->pushButton_2->setStyleSheet("background-color: red;");
    }
    ui->progressBar->setValue(value3+20);
    value3+=20;
}

void Dialog4::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"III","All sides of a scalene triangle have the same length.",QMessageBox::Yes| QMessageBox::No);
    if(reply==QMessageBox::Yes)
    {
        QMessageBox::information(this,"wrong_answer","No! All sides of a scalene triangle don't have the same length." );
        ui->pushButton_3->setStyleSheet("background-color: red;");

    }
    else
    {
        QMessageBox::information(this,"good_answer", "Well done! All sides of a scalene triangle don't have the same length.");
        ui->pushButton_3->setStyleSheet("background-color: green;");
    }
    ui->progressBar->setValue(value3+20);
    value3+=20;
}

void Dialog4::on_pushButton_4_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"IV","A square is a rectangle",QMessageBox::Yes| QMessageBox::No);
    if(reply==QMessageBox::Yes)
    {
        QMessageBox::information(this,"good_answer","Well done! A square is a rectangle");
        ui->pushButton_4->setStyleSheet("background-color: green;");

    }
    else
    {
        QMessageBox::information(this,"wrong_answer","No! A square is a rectangle");
        ui->pushButton_4->setStyleSheet("background-color: red;");
    }
    ui->progressBar->setValue(value3+20);
    value3+=20;
}



void Dialog4::on_pushButton_5_clicked()
{


    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"V","There are 18 stitches on the dice",QMessageBox::Yes| QMessageBox::No);
    if(reply==QMessageBox::Yes)
    {
        QMessageBox::information(this,"wrong_answer", "No!There are 21 stitches on the dice");
        ui->pushButton_5->setStyleSheet("background-color: red;");
    }
    else
    {
        QMessageBox::information(this,"good_answer", "Well done!There are 21 stitches on the dice");
        ui->pushButton_5->setStyleSheet("background-color: green;");

    }
    ui->progressBar->setValue(value3+20);
    value3+=20;
}

Dialog4::~Dialog4()
{
    delete ui;
}
