#include "dialog3.h"
#include "ui_dialog3.h"
#include <QPixmap>
#include <QPainter>
#include <QMessageBox>

double counter = 0;
bool start = true;
extern int language;

Dialog3::Dialog3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog3)
{
    ui->setupUi(this);
    ui->label->setPixmap(QPixmap(":/new/prefix1/solid2.png"));
    if(language==1)
    {
       ui->label_2->setStyleSheet("font-size:16pt");
       ui->label_2->setAlignment(Qt::AlignCenter);
       ui->label_2->setText("Ile wierchołków i krawędzi\n ma ta bryła?");
       ui->pushButton_3->setText("Odpowiedź");
    }
    if(language==2)
    {
       ui->label_2->setStyleSheet("font-size:16pt");
       ui->label_2->setAlignment(Qt::AlignCenter);
       ui->label_2->setText("Wie viele Eckpunkte und Kanten\nhat dieser Block?");
       ui->pushButton_3->setText("Die Antworten");
    }
    if(language==0)
    {
       ui->label_2->setStyleSheet("font-size:16pt");
       ui->label_2->setAlignment(Qt::AlignCenter);
       ui->label_2->setText("How many vertices and edges\ndoes the present solid have?");
       ui->pushButton_3->setText("Answer");
    }
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
    if(language==0)
    {
      QMessageBox::information(this,"Answer", "We can see 24 vertices and 36 edges");
    }
    if(language==1)
    {
        QMessageBox::information(this,"Odpowiedź", "Widzimy 24 wierzchołki i 36 krawędzi");
    }
    if(language==2)
    {
        QMessageBox::information(this,"Die Antworten", "Wir können 24 Eckpunkte und 36 Kanten sehen");
    }

}
