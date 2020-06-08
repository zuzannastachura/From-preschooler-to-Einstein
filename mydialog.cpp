#include "mydialog.h"
#include "ui_mydialog.h"
#include <QMessageBox>
#include <QTimer>
#include <QProgressBar>
#include <QInputDialog>

QTimer *timer;
int counter2=60;
int value2=0;

MyDialog::MyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyDialog)
{
    ui->setupUi(this);
    ui->ProgressBar->setMinimum(0);
    ui->ProgressBar->setValue(value2);
    ui->ProgressBar->setStyleSheet("background-color: grey;");
    timer=new QTimer(this);
    timer->setInterval(1000);
    connect(timer,SIGNAL(timeout()),this,SLOT(timer_timeout()));
    timer->start();
    ui->label->setText(QString::number(counter2));
}
void MyDialog::timer_timeout()
{

    counter2--;
    ui->label->setText(QString::number(counter2));

    if(counter2<0)
    {
        this->close();
    }
}

MyDialog::~MyDialog()
{
    delete ui;
}

void MyDialog::on_pushButton_clicked()
{
    int n = QInputDialog::getInt(this,"Question 1","5+8=");
    if(n!=13)
    {
        QMessageBox::information(this,"wrong_answer", "Sory,that's not a good answer the good answer is 13");
        ui->pushButton->setStyleSheet("background-color: red;");
    }
    else
    {
        QMessageBox::information(this,"good_answer", "Well done,that's a good answer!");
        ui->pushButton->setStyleSheet("background-color: green;");

    }
    ui->ProgressBar->setValue(value2+10);
    value2+=10;
}


void MyDialog::on_pushButton_2_clicked()
{
    int n = QInputDialog::getInt(this,"Question 2","2*2=");
    if(n==4)
    {
        QMessageBox::information(this,"good_answer","Well done,that's a good answer!");
        ui->pushButton_2->setStyleSheet("background-color: green;");

    }
    else
    {
        QMessageBox::information(this,"wrong_answer", "Sory,that's not a good answer the good answer is 4");
        ui->pushButton_2->setStyleSheet("background-color: red;");
    }
    ui->ProgressBar->setValue(value2+10);
    value2+=10;
}

void MyDialog::on_pushButton_3_clicked()
{
   int n = QInputDialog::getInt(this,"Question 3","5+21=");
    if(n==26)
    {
        QMessageBox::information(this,"good_answer", "Well done,that's a good answer!");
        ui->pushButton_3->setStyleSheet("background-color: green;");

    }
    else
    {
        QMessageBox::information(this,"wrong_answer","Sory,that's not a good answer the good answer is 26" );
        ui->pushButton_3->setStyleSheet("background-color: red;");
    }
    ui->ProgressBar->setValue(value2+10);
    value2+=10;
}

void MyDialog::on_pushButton_4_clicked()
{
    int n = QInputDialog::getInt(this,"Question 4","38-14=");
    if(n==24)
    {
        QMessageBox::information(this,"good_answer","Well done,that's a good answer!");
        ui->pushButton_4->setStyleSheet("background-color: green;");

    }
    else
    {
        QMessageBox::information(this,"wrong_answer","Sory,that's not a good answer the good answer is 24");
        ui->pushButton_4->setStyleSheet("background-color: red;");
    }
    ui->ProgressBar->setValue(value2+10);
    value2+=10;
}



void MyDialog::on_pushButton_5_clicked()
{


    int n = QInputDialog::getInt(this,"Question 5","7*8=");
    if(n!=56)
    {
        QMessageBox::information(this,"wrong_answer", "Sory,that's not a good answer the good answer is 56");
        ui->pushButton_5->setStyleSheet("background-color: red;");
    }
    else
    {
        QMessageBox::information(this,"good_answer", "Well done,that's a good answer!");
        ui->pushButton_5->setStyleSheet("background-color: green;");

    }
    ui->ProgressBar->setValue(value2+10);
    value2+=10;
}

void MyDialog::on_pushButton_6_clicked()
{

    int n = QInputDialog::getInt(this,"Question 6","69+11=");
    if(n!=80)
    {
        QMessageBox::information(this,"wrong_answer", "Sory,that's not a good answer the good answer is 80");
        ui->pushButton_6->setStyleSheet("background-color: red;");
    }
    else
    {
        QMessageBox::information(this,"good_answer", "Well done,that's a good answer!");
        ui->pushButton_6->setStyleSheet("background-color: green;");

    }
    ui->ProgressBar->setValue(value2+10);
    value2+=10;

}

void MyDialog::on_pushButton_7_clicked()
{


    int n = QInputDialog::getInt(this,"Question 7","73-15=");
    if(n==58)
    {
        QMessageBox::information(this,"good_answer","Well done,that's a good answer!" );
        ui->pushButton_7->setStyleSheet("background-color: green;");

    }
    else
    {
        QMessageBox::information(this,"wrong_answer","Sory,that's not a good answer the good answer is 58");
        ui->pushButton_7->setStyleSheet("background-color: red;");

    }
    ui->ProgressBar->setValue(value2+10);
    value2+=10;
}

void MyDialog::on_pushButton_8_clicked()
{

    int n = QInputDialog::getInt(this,"Question 8","9*3=");
    if(n!=27)
    {
        QMessageBox::information(this,"wrong_answer", "Sory,that's not a good answer the good answer is 27");
        ui->pushButton_8->setStyleSheet("background-color: red;");
    }
    else
    {
        QMessageBox::information(this,"good_answer", "Well done,that's a good answer!");
        ui->pushButton_8->setStyleSheet("background-color: green;");

    }
    ui->ProgressBar->setValue(value2+10);
    value2+=10;

}

void MyDialog::on_pushButton_9_clicked()
{

    int n = QInputDialog::getInt(this,"Question 9","9*8=");
    if(n==82)
    {
        QMessageBox::information(this,"good_answer","Well done,that's a good answer!" );
        ui->pushButton_9->setStyleSheet("background-color: green;");

    }
    else
    {
        QMessageBox::information(this,"wrong_answer","Sory,that's not a good answer the good answer is 82" );
        ui->pushButton_9->setStyleSheet("background-color: red;");

    }
    ui->ProgressBar->setValue(value2+10);
    value2+=10;
}

void MyDialog::on_pushButton_10_clicked()
{

    int n = QInputDialog::getInt(this,"Question 10","100-11=");
    if(n!=89)
    {
        QMessageBox::information(this,"wrong_answer", "Sory,that's not a good answer the good answer is 89");
        ui->pushButton_10->setStyleSheet("background-color: red;");
    }
    else
    {
        QMessageBox::information(this,"good_answer", "Well done,that's a good answer!");
        ui->pushButton_10->setStyleSheet("background-color: green;");

    }
    ui->ProgressBar->setValue(value2+10);
    value2+=10;

}
