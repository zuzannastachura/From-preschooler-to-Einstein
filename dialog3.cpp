#include "dialog3.h"
#include "ui_dialog3.h"
#include <QPixmap>
#include <QPainter>
#include <QMessageBox>

double counter = 0;
bool start = true;

Dialog3::Dialog3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog3)
{
    ui->setupUi(this);
    ui->label->setPixmap(QPixmap(":/new/prefix1/solid2.png"));
}

Dialog3::~Dialog3()
{
    delete ui;
}



void Dialog3::on_pushButton_clicked()
{
    start=true;

    while(start==true){

        QApplication::processEvents();

        QPixmap load2(":/new/prefix1/solid2.png");
        QPixmap rotate(load2.size());
        QPainter p(&rotate);
        p.setRenderHint(QPainter::Antialiasing);
        p.setRenderHint(QPainter::SmoothPixmapTransform);
        p.setRenderHint(QPainter::HighQualityAntialiasing);
        p.translate(rotate.size().width() /2, rotate.size().height() /2);
        p.rotate(counter);
        p.translate(-rotate.size().width() /2, -rotate.size().height() /2);

        p.drawPixmap(0, 0, load2);
        p.end();
        ui->label->setPixmap(rotate);
        counter+=0.2;
    }


}



void Dialog3::on_pushButton_2_clicked()
{
    start=false;
}
void Dialog3::on_pushButton_3_clicked()
{
     QMessageBox::information(this,"Answer", "We can see 24 vertices and 36 edges");
}
