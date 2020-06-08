#include "dialog2.h"
#include "ui_dialog2.h"
#include <QPainter>
#include <QMessageBox>

double counter3=0;
bool start2= true;
Dialog2::Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);
    ui->label->setPixmap(QPixmap(":/new/prefix1/solid4.png"));
}

Dialog2::~Dialog2()
{
    delete ui;
}



void Dialog2::on_pushButton_clicked()
{
    start2=true;

    while(start2==true){

        QApplication::processEvents();

        QPixmap load(":/new/prefix1/solid4.png");
        QPixmap rotate(load.size());
        QPainter p(&rotate);
        p.setRenderHint(QPainter::Antialiasing);
        p.setRenderHint(QPainter::SmoothPixmapTransform);
        p.setRenderHint(QPainter::HighQualityAntialiasing);
        p.translate(rotate.size().width() /2, rotate.size().height() /2);
        p.rotate(counter3);
        p.translate(-rotate.size().width() /2, -rotate.size().height() /2);

        p.drawPixmap(0, 0, load);
        p.end();
        ui->label->setPixmap(rotate);
        counter3+=0.2;
    }
}

void Dialog2::on_pushButton_2_clicked()
{
    start2=false;
}

void Dialog2::on_pushButton_3_clicked()
{
     QMessageBox::information(this,"Answer", "We can see 11 balls");
}
