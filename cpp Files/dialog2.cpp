#include "dialog2.h"
#include "ui_dialog2.h"
#include <QPainter>
#include <QMessageBox>

double counter3=0;
bool start2= true;
extern int language;
Dialog2::Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);
    ui->label->setPixmap(QPixmap(":/new/prefix1/solid4.png"));
    if(language==1)
    {
       ui->label_2->setStyleSheet("font-size:16pt");
       ui->label_2->setAlignment(Qt::AlignCenter);
       ui->label_2->setText("Ile piłek jest umieszczonych\nna wierzchołkach?");
       ui->pushButton_3->setText("Odpowiedź");
    }
    if(language==2)
    {
       ui->label_2->setStyleSheet("font-size:16pt");
       ui->label_2->setAlignment(Qt::AlignCenter);
       ui->label_2->setText("Wie viele Bälle werden\nauf die Oberseite gelegt?");
       ui->pushButton_3->setText("Die Antworten");
    }
    if(language==0)
    {
       ui->label_2->setStyleSheet("font-size:16pt");
       ui->label_2->setAlignment(Qt::AlignCenter);
       ui->label_2->setText("How many balls are placed\non the vertices?");
       ui->pushButton_3->setText("Answer");
    }
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
    if(language==0)
    {
     QMessageBox::information(this,"Answer", "We can see 12 balls");
    }
    if(language==1)
    {
        QMessageBox::information(this,"Odpowiedź", "Możemy zobaczyć 12 piłek.");
    }
    if(language==2)
    {
        QMessageBox::information(this,"Die Antworten", "Wir können 12 Bälle sehen");
    }
}
