#include "dialog4.h"
#include "ui_dialog4.h"
#include <QProgressBar>
#include <QMessageBox>

int value3=0;
extern int language;

Dialog4::Dialog4(QWidget *parent) :
    QDialog(parent),

    ui(new Ui::Dialog4)
{
    value3=0;
    ui->setupUi(this);
    ui->progressBar->setMinimum(0);
    ui->progressBar->setValue(value3);
    ui->progressBar->setStyleSheet("background-color: grey;");
    if(language==1)
    {
       ui->label->setStyleSheet("font-size:16pt");
       ui->label->setAlignment(Qt::AlignCenter);
       ui->label->setText("Prawda czy Fałsz?");
    }
    if(language==2)
    {
       ui->label->setStyleSheet("font-size:16pt");
       ui->label->setAlignment(Qt::AlignCenter);
       ui->label->setText("Richtig oder Falsh?");
    }
    if(language==0)
    {
       ui->label->setStyleSheet("font-size:16pt");
       ui->label->setAlignment(Qt::AlignCenter);
       ui->label->setText("True or False");
    }
}
void Dialog4::on_pushButton_clicked()
{
    QMessageBox a1(QMessageBox::Question,"I","A convex shape curves outwards.",QMessageBox::Yes|QMessageBox::No);
    if(language==0)
    {
        a1.setText("A convex shape curves outwards.");
        a1.setButtonText(QMessageBox::Yes, "True");
        a1.setButtonText(QMessageBox::No, "False");
    }
    if(language==1)
    {
        a1.setText("Wypukły kształt wygina się na zewnątrz.");
        a1.setButtonText(QMessageBox::Yes, "Prawda");
        a1.setButtonText(QMessageBox::No, "Fałsz");
    }
    if(language==2)
    {
        a1.setText("Eine konvexe Form krümmt sich nach außen.");
        a1.setButtonText(QMessageBox::Yes, "Richtig");
        a1.setButtonText(QMessageBox::No, "Falsch");
    }
    if(a1.exec()==QMessageBox::Yes)
    {
        if(language==0)
        {
          QMessageBox::information(this,"good_answer", "Well done! A convex shape curves outwards.");
        }
        if(language==1)
        {
          QMessageBox::information(this,"dobra_odpowiedź", "Dobra robota! Wypukły kształt wygina się na zewnątrz.");
        }
        if(language==2)
        {
          QMessageBox::information(this,"gute_Antwort", "Gut gemacht! Eine konvexe Form krümmt sich nach außen.");
        }
        ui->pushButton->setStyleSheet("background-color: green;");
        ui->progressBar->setValue(value3+20);
        value3+=20;
    }
    else
    {
        if(language==0)
        {
          QMessageBox::information(this,"wrong_answer", "No! A convex shape curves outwards.");
        }
        if(language==1)
        {
          QMessageBox::information(this,"zła_odpowiedź", "Nie! Wypukły kształt wygina się na zewnątrz.");
        }
        if(language==2)
        {
          QMessageBox::information(this,"falsche_Antwort", "Nein! Eine konvexe Form krümmt sich nach außen.");
        }
        ui->pushButton->setStyleSheet("background-color: red;");

    }

}


void Dialog4::on_pushButton_2_clicked()
{
    QMessageBox a2(QMessageBox::Question,"II","A googol is bigger than a billion.",QMessageBox::Yes|QMessageBox::No);
    if(language==0)
    {
        a2.setText("A googol is bigger than a billion.");
        a2.setButtonText(QMessageBox::Yes, "True");
        a2.setButtonText(QMessageBox::No, "False");
    }
    if(language==1)
    {
        a2.setText("Googol jest większy niż miliard.");
        a2.setButtonText(QMessageBox::Yes, "Prawda");
        a2.setButtonText(QMessageBox::No, "Fałsz");
    }
    if(language==2)
    {
        a2.setText("Ein Googol ist größer als eine Milliarde.");
        a2.setButtonText(QMessageBox::Yes, "Richtig");
        a2.setButtonText(QMessageBox::No, "Falsch");
    }
    if(a2.exec()==QMessageBox::Yes)
    {
        if(language==0)
        {
          QMessageBox::information(this,"good_answer", "Well done! A googol is bigger than a billion.");
        }
        if(language==1)
        {
          QMessageBox::information(this,"dobra_odpowiedź", "Dobra robota! Googol jest większy niż miliard.");
        }
        if(language==2)
        {
          QMessageBox::information(this,"gute_Antwort", "Gut gemacht! Ein Googol ist größer als eine Milliarde.");
        }
        ui->pushButton_2->setStyleSheet("background-color: green;");
        ui->progressBar->setValue(value3+20);
        value3+=20;
    }
    else
    {
        if(language==0)
        {
          QMessageBox::information(this,"wrong_answer", "No! A googol is bigger than a billion.");
        }
        if(language==1)
        {
          QMessageBox::information(this,"zła_odpowiedź", "Nie! Googol jest większy niż miliard.");
        }
        if(language==2)
        {
          QMessageBox::information(this,"falsche_Antwort", "Nein! Ein Googol ist größer als eine Milliarde.");
        }
        ui->pushButton_2->setStyleSheet("background-color: red;");

    }
}
void Dialog4::on_pushButton_3_clicked()
{
    QMessageBox a3(QMessageBox::Question,"III","All sides of a scalene triangle have the same length.",QMessageBox::Yes|QMessageBox::No);
    if(language==0)
    {
        a3.setText("All sides of a scalene triangle have the same length.");
        a3.setButtonText(QMessageBox::Yes, "True");
        a3.setButtonText(QMessageBox::No, "False");
    }
    if(language==1)
    {
        a3.setText("Wszystkie boki trójkąta różnobocznego mają tę samą długość.");
        a3.setButtonText(QMessageBox::Yes, "Prawda");
        a3.setButtonText(QMessageBox::No, "Fałsz");
    }
    if(language==2)
    {
        a3.setText("Alle Seiten eines Skalenendreiecks haben die gleiche Länge.");
        a3.setButtonText(QMessageBox::Yes, "Richtig");
        a3.setButtonText(QMessageBox::No, "Falsch");
    }
    if(a3.exec()==QMessageBox::Yes)
    {
        if(language==0)
        {
          QMessageBox::information(this,"wrong_answer", "No! All sides of a scalene triangle don't have the same length.");
        }
        if(language==1)
        {
          QMessageBox::information(this,"zła_odpowiedź", "Nie! Wszystkie boki trójkąta różnobocznego nie mają tej samej długości.");
        }
        if(language==2)
        {
          QMessageBox::information(this,"falsche_Antwort", "Nein! Alle Seiten eines Skalenendreiecks haben nicht die gleiche Länge.");
        }
        ui->pushButton_3->setStyleSheet("background-color: red;");

    }
    else
    {
        if(language==0)
        {
          QMessageBox::information(this,"good_answer", "Well done! All sides of a scalene triangle don't have the same length.");
        }
        if(language==1)
        {
          QMessageBox::information(this,"dobra_odpowiedź", "Dobra robota! Wszystkie boki trójkąta różnobocznego nie mają tej samej długości.");
        }
        if(language==2)
        {
          QMessageBox::information(this,"gute_Antwort", "Gut gemacht! Alle Seiten eines Skalenendreiecks haben nicht die gleiche Länge.");
        }
        ui->pushButton_3->setStyleSheet("background-color: green;");
        ui->progressBar->setValue(value3+20);
        value3+=20;
    }

}

void Dialog4::on_pushButton_4_clicked()
{
    QMessageBox a4(QMessageBox::Question,"IV","A square is a rectangle.",QMessageBox::Yes|QMessageBox::No);
    if(language==0)
    {
        a4.setText("A square is a rectangle.");
        a4.setButtonText(QMessageBox::Yes, "True");
        a4.setButtonText(QMessageBox::No, "False");
    }
    if(language==1)
    {
        a4.setText("Kwadrat jest prostokątem.");
        a4.setButtonText(QMessageBox::Yes, "Prawda");
        a4.setButtonText(QMessageBox::No, "Fałsz");
    }
    if(language==2)
    {
        a4.setText("Ein Quadrat ist ein Rechteck.");
        a4.setButtonText(QMessageBox::Yes, "Richtig");
        a4.setButtonText(QMessageBox::No, "Falsch");
    }
    if(a4.exec()==QMessageBox::Yes)
    {
        if(language==0)
        {
          QMessageBox::information(this,"good_answer", "Well done! A square is a rectangle.");
        }
        if(language==1)
        {
          QMessageBox::information(this,"dobra_odpowiedź", "Dobra robota! Kwadrat jest prostokątem.");
        }
        if(language==2)
        {
          QMessageBox::information(this,"gute_Antwort", "Gut gemacht! Ein Quadrat ist ein Rechteck.");
        }
        ui->pushButton_4->setStyleSheet("background-color: green;");
        ui->progressBar->setValue(value3+20);
        value3+=20;
    }
    else
    {
        if(language==0)
        {
          QMessageBox::information(this,"wrong_answer", "No! A square is a rectangle.");
        }
        if(language==1)
        {
          QMessageBox::information(this,"zła_odpowiedź", "Nie! Kwadrat jest prostokątem.");
        }
        if(language==2)
        {
          QMessageBox::information(this,"falsche_Antwort", "Nein! Ein Quadrat ist ein Rechteck.");
        }
        ui->pushButton_4->setStyleSheet("background-color: red;");

    }

}

void Dialog4::on_pushButton_5_clicked()
{


    QMessageBox a5(QMessageBox::Question,"V","The sum of the dice stitches is 18.",QMessageBox::Yes|QMessageBox::No);
    if(language==0)
    {
        a5.setText("The sum of the dice stitches is 18.");
        a5.setButtonText(QMessageBox::Yes, "True");
        a5.setButtonText(QMessageBox::No, "False");
    }
    if(language==1)
    {
        a5.setText("Suma oczek znajdujących się na kostce wynosi 18.");
        a5.setButtonText(QMessageBox::Yes, "Prawda");
        a5.setButtonText(QMessageBox::No, "Fałsz");
    }
    if(language==2)
    {
        a5.setText("Die Summe der Würfelstiche beträgt 18.");
        a5.setButtonText(QMessageBox::Yes, "Richtig");
        a5.setButtonText(QMessageBox::No, "Falsch");
    }
    if(a5.exec()==QMessageBox::Yes)
    {
        if(language==0)
        {
          QMessageBox::information(this,"wrong_answer", "No! The sum of the dice stitches is 21.");
        }
        if(language==1)
        {
          QMessageBox::information(this,"zła_odpowiedź", "Nie! Suma oczek znajdujących się na kostce wynosi 21.");
        }
        if(language==2)
        {
          QMessageBox::information(this,"falsche_Antwort", "Nein! Die Summe der Würfelstiche beträgt 21.");
        }
        ui->pushButton_5->setStyleSheet("background-color: red;");

    }
    else
    {
        if(language==0)
        {
          QMessageBox::information(this,"good_answer", "Well done! The sum of the dice stitches is 21.");
        }
        if(language==1)
        {
          QMessageBox::information(this,"dobra_odpowiedź", "Dobra robota! Suma oczek znajdujących się na kostce wynosi 21.");
        }
        if(language==2)
        {
          QMessageBox::information(this,"gute_Antwort", "Gut gemacht! Die Summe der Würfelstiche beträgt 21.");
        }
        ui->pushButton_5->setStyleSheet("background-color: green;");
        ui->progressBar->setValue(value3+20);
        value3+=20;
    }

}

Dialog4::~Dialog4()
{
    delete ui;
}
