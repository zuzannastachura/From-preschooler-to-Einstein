#include "mydialog.h"
#include "ui_mydialog.h"
#include <QMessageBox>
#include <QTimer>
#include <QProgressBar>
#include <QInputDialog>

QTimer *timer;
int counter2=90;
int value2=0;
extern int language;

MyDialog::MyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyDialog)
{
    value2=0;
    counter2=90;
    ui->setupUi(this);
    ui->ProgressBar->setMinimum(0);
    ui->ProgressBar->setValue(value2);
    ui->ProgressBar->setStyleSheet("background-color: grey;");
    if(language==0)
    {
        ui->label_2->setStyleSheet("font-size:16pt");
        ui->label_2->setAlignment(Qt::AlignCenter);
        ui->label_2->setText("You have only 90 seconds to complete\nthe whole quiz");
        ui->checkBox->setText("Super! I can already\ncount.");
        ui->checkBox_2->setText("I am making progress\nbut I still need to\npractice a little.");
        ui->checkBox_3->setText("I still have a lot of\nwork to do but I can\ndo it.");
    }
    if(language==1)
    {
        ui->label_2->setStyleSheet("font-size:16pt");
        ui->label_2->setAlignment(Qt::AlignCenter);
        ui->label_2->setText("Masz tylko 90 sekund na ukończenie\ncałego quizu");
        ui->checkBox->setText("Super! Umiem już\nliczyć.");
        ui->checkBox_2->setText("Robię postępy,\n ale wciąż muszę \ntrochę poćwiczyć.");
        ui->checkBox_3->setText("Wciąż mam dużo pracy of\nale mogę to zrobić.");
    }
    if(language==2)
    {
        ui->label_2->setStyleSheet("font-size:16pt");
        ui->label_2->setAlignment(Qt::AlignCenter);
        ui->label_2->setText("Sie haben nur 90 Sekunden Zeit\ndas ganze Quiz");
        ui->checkBox->setText("Super! Ich kann\n schon zählen.");
        ui->checkBox_2->setText("Ich mache Fortschritte,\n aber ich muss noch\n ein wenig trainieren.");
        ui->checkBox_3->setText("Ich habe noch viel\n zu tun,aber ich\n kann es schaffen.");
    }
    timer=new QTimer(this);
    timer->setInterval(1000);
    connect(timer,SIGNAL(timeout()),this,SLOT(timer_timeout()));
    timer->start();
    ui->label->setText(QString::number(counter2));
}
void MyDialog::timer_timeout()
{

    counter2-=1;
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
    int n = QInputDialog::getInt(this,"1","5+8=");
    if(n!=13)
    {
        if(language==0)
        {
            QMessageBox::information(this,"wrong_answer", "Sory,that's not a good answer. The good answer is 13.");
        }
        if(language==1)
        {
            QMessageBox::information(this,"zła_odpowiedź", "Przykro mi to nie jest dobra odpowiedź. Dobra odpowiedź to 13.");
        }
        if(language==2)
        {
            QMessageBox::information(this,"falsche_Antwort", "Es tut mir leid, das ist keine gute Antwort. Eine gute Antwort ist 13.");
        }
        ui->pushButton->setStyleSheet("background-color: red;");
    }
    else
    {
        if(language==0)
        {
            QMessageBox::information(this,"good_answer", "Well done,that's a good answer!");
        }
        if(language==1)
        {
            QMessageBox::information(this,"dobra_odpowiedź", "Dobra robota, to dobra odpowiedź!");
        }
        if(language==2)
        {
            QMessageBox::information(this,"gute_Antwort", "Gut gemacht, das ist eine gute Antwort!");
        }
        ui->pushButton->setStyleSheet("background-color: green;");
        ui->ProgressBar->setValue(value2+10);
        value2+=10;
    }

}


void MyDialog::on_pushButton_2_clicked()
{
    int n = QInputDialog::getInt(this,"2","2*2=");
    if(n==4)
    {
        if(language==0)
        {
            QMessageBox::information(this,"good_answer", "Well done,that's a good answer!");
        }
        if(language==1)
        {
            QMessageBox::information(this,"dobra_odpowiedź", "Dobra robota, to dobra odpowiedź!");
        }
        if(language==2)
        {
            QMessageBox::information(this,"gute_Antwort", "Gut gemacht, das ist eine gute Antwort!");
        }
        ui->pushButton_2->setStyleSheet("background-color: green;");
        ui->ProgressBar->setValue(value2+10);
        value2+=10;

    }
    else
    {
        if(language==0)
        {
            QMessageBox::information(this,"wrong_answer", "Sory,that's not a good answer. The good answer is 4.");
        }
        if(language==1)
        {
            QMessageBox::information(this,"zła_odpowiedź", "Przykro mi to nie jest dobra odpowiedź. Dobra odpowiedź to 4.");
        }
        if(language==2)
        {
            QMessageBox::information(this,"falsche_Antwort", "Es tut mir leid, das ist keine gute Antwort. Eine gute Antwort ist 4.");
        }
        ui->pushButton_2->setStyleSheet("background-color: red;");
    }

}

void MyDialog::on_pushButton_3_clicked()
{
   int n = QInputDialog::getInt(this,"3","5+21=");
    if(n==26)
    {
        if(language==0)
        {
            QMessageBox::information(this,"good_answer", "Well done,that's a good answer!");
        }
        if(language==1)
        {
            QMessageBox::information(this,"dobra_odpowiedź", "Dobra robota, to dobra odpowiedź!");
        }
        if(language==2)
        {
            QMessageBox::information(this,"gute_Antwort", "Gut gemacht, das ist eine gute Antwort!");
        }
        ui->pushButton_3->setStyleSheet("background-color: green;");
        ui->ProgressBar->setValue(value2+10);
        value2+=10;

    }
    else
    {
        if(language==0)
        {
            QMessageBox::information(this,"wrong_answer", "Sory,that's not a good answer. The good answer is 26.");
        }
        if(language==1)
        {
            QMessageBox::information(this,"zła_odpowiedź", "Przykro mi to nie jest dobra odpowiedź. Dobra odpowiedź to 26.");
        }
        if(language==2)
        {
            QMessageBox::information(this,"falsche_Antwort", "Es tut mir leid, das ist keine gute Antwort. Eine gute Antwort ist 26.");
        }
        ui->pushButton_3->setStyleSheet("background-color: red;");
    }

}

void MyDialog::on_pushButton_4_clicked()
{
    int n = QInputDialog::getInt(this,"4","38-14=");
    if(n==24)
    {
        if(language==0)
        {
            QMessageBox::information(this,"good_answer", "Well done,that's a good answer!");
        }
        if(language==1)
        {
            QMessageBox::information(this,"dobra_odpowiedź", "Dobra robota, to dobra odpowiedź!");
        }
        if(language==2)
        {
            QMessageBox::information(this,"gute_Antwort", "Gut gemacht, das ist eine gute Antwort!");
        }
        ui->pushButton_4->setStyleSheet("background-color: green;");
        ui->ProgressBar->setValue(value2+10);
        value2+=10;

    }
    else
    {
        if(language==0)
        {
            QMessageBox::information(this,"wrong_answer", "Sory,that's not a good answer. The good answer is 24.");
        }
        if(language==1)
        {
            QMessageBox::information(this,"zła_odpowiedź", "Przykro mi to nie jest dobra odpowiedź. Dobra odpowiedź to 24.");
        }
        if(language==2)
        {
            QMessageBox::information(this,"falsche_Antwort", "Es tut mir leid, das ist keine gute Antwort. Eine gute Antwort ist 24.");
        }
        ui->pushButton_4->setStyleSheet("background-color: red;");
    }

}



void MyDialog::on_pushButton_5_clicked()
{


    int n = QInputDialog::getInt(this,"5","7*8=");
    if(n!=56)
    {
        if(language==0)
        {
            QMessageBox::information(this,"wrong_answer", "Sory,that's not a good answer. The good answer is 56.");
        }
        if(language==1)
        {
            QMessageBox::information(this,"zła_odpowiedź", "Przykro mi to nie jest dobra odpowiedź. Dobra odpowiedź to 56.");
        }
        if(language==2)
        {
            QMessageBox::information(this,"falsche_Antwort", "Es tut mir leid, das ist keine gute Antwort. Eine gute Antwort ist 56.");
        }
        ui->pushButton_5->setStyleSheet("background-color: red;");

    }
    else
    {
        if(language==0)
        {
            QMessageBox::information(this,"good_answer", "Well done,that's a good answer!");
        }
        if(language==1)
        {
            QMessageBox::information(this,"dobra_odpowiedź", "Dobra robota, to dobra odpowiedź!");
        }
        if(language==2)
        {
            QMessageBox::information(this,"gute_Antwort", "Gut gemacht, das ist eine gute Antwort!");
        }
        ui->pushButton_5->setStyleSheet("background-color: green;");
        ui->ProgressBar->setValue(value2+10);
        value2+=10;

    }

}

void MyDialog::on_pushButton_6_clicked()
{

    int n = QInputDialog::getInt(this,"6","69+11=");
    if(n!=80)
    {
        if(language==0)
        {
            QMessageBox::information(this,"wrong_answer", "Sory,that's not a good answer. The good answer is 80.");
        }
        if(language==1)
        {
            QMessageBox::information(this,"zła_odpowiedź", "Przykro mi to nie jest dobra odpowiedź. Dobra odpowiedź to 80.");
        }
        if(language==2)
        {
            QMessageBox::information(this,"falsche_Antwort", "Es tut mir leid, das ist keine gute Antwort. Eine gute Antwort ist 80.");
        }
        ui->pushButton_6->setStyleSheet("background-color: red;");
    }
    else
    {
        if(language==0)
        {
            QMessageBox::information(this,"good_answer", "Well done,that's a good answer!");
        }
        if(language==1)
        {
            QMessageBox::information(this,"dobra_odpowiedź", "Dobra robota, to dobra odpowiedź!");
        }
        if(language==2)
        {
            QMessageBox::information(this,"gute_Antwort", "Gut gemacht, das ist eine gute Antwort!");
        }
        ui->pushButton_6->setStyleSheet("background-color: green;");
        ui->ProgressBar->setValue(value2+10);
        value2+=10;

    }


}

void MyDialog::on_pushButton_7_clicked()
{


    int n = QInputDialog::getInt(this,"7","73-15=");
    if(n==58)
    {
        if(language==0)
        {
            QMessageBox::information(this,"good_answer", "Well done,that's a good answer!");
        }
        if(language==1)
        {
            QMessageBox::information(this,"dobra_odpowiedź", "Dobra robota, to dobra odpowiedź!");
        }
        if(language==2)
        {
            QMessageBox::information(this,"gute_Antwort", "Gut gemacht, das ist eine gute Antwort!");
        }
        ui->pushButton_7->setStyleSheet("background-color: green;");
        ui->ProgressBar->setValue(value2+10);
        value2+=10;

    }
    else
    {
        if(language==0)
        {
            QMessageBox::information(this,"wrong_answer", "Sory,that's not a good answer. The good answer is 58.");
        }
        if(language==1)
        {
            QMessageBox::information(this,"zła_odpowiedź", "Przykro mi to nie jest dobra odpowiedź. Dobra odpowiedź to 58.");
        }
        if(language==2)
        {
            QMessageBox::information(this,"falsche_Antwort", "Es tut mir leid, das ist keine gute Antwort. Eine gute Antwort ist 58.");
        }
        ui->pushButton_7->setStyleSheet("background-color: red;");

    }

}

void MyDialog::on_pushButton_8_clicked()
{

    int n = QInputDialog::getInt(this,"8","9*3=");
    if(n!=27)
    {
        if(language==0)
        {
            QMessageBox::information(this,"wrong_answer", "Sory,that's not a good answer. The good answer is 27.");
        }
        if(language==1)
        {
            QMessageBox::information(this,"zła_odpowiedź", "Przykro mi to nie jest dobra odpowiedź. Dobra odpowiedź to 27.");
        }
        if(language==2)
        {
            QMessageBox::information(this,"falsche_Antwort", "Es tut mir leid, das ist keine gute Antwort. Eine gute Antwort ist 27.");
        }
        ui->pushButton_8->setStyleSheet("background-color: red;");
    }
    else
    {
        if(language==0)
        {
            QMessageBox::information(this,"good_answer", "Well done,that's a good answer!");
        }
        if(language==1)
        {
            QMessageBox::information(this,"dobra_odpowiedź", "Dobra robota, to dobra odpowiedź!");
        }
        if(language==2)
        {
            QMessageBox::information(this,"gute_Antwort", "Gut gemacht, das ist eine gute Antwort!");
        }
        ui->pushButton_8->setStyleSheet("background-color: green;");
        ui->ProgressBar->setValue(value2+10);
        value2+=10;


    }

}

void MyDialog::on_pushButton_9_clicked()
{

    int n = QInputDialog::getInt(this,"9","9*8=");
    if(n==72)
    {
        if(language==0)
        {
            QMessageBox::information(this,"good_answer", "Well done,that's a good answer!");
        }
        if(language==1)
        {
            QMessageBox::information(this,"dobra_odpowiedź", "Dobra robota, to dobra odpowiedź!");
        }
        if(language==2)
        {
            QMessageBox::information(this,"gute_Antwort", "Gut gemacht, das ist eine gute Antwort!");
        }
        ui->pushButton_9->setStyleSheet("background-color: green;");
        ui->ProgressBar->setValue(value2+10);
        value2+=10;

    }
    else
    {
        if(language==0)
        {
            QMessageBox::information(this,"wrong_answer", "Sory,that's not a good answer. The good answer is 72.");
        }
        if(language==1)
        {
            QMessageBox::information(this,"zła_odpowiedź", "Przykro mi to nie jest dobra odpowiedź. Dobra odpowiedź to 72.");
        }
        if(language==2)
        {
            QMessageBox::information(this,"falsche_Antwort", "Es tut mir leid, das ist keine gute Antwort. Eine gute Antwort ist 72.");
        }
        ui->pushButton_9->setStyleSheet("background-color: red;");

    }

}

void MyDialog::on_pushButton_10_clicked()
{

    int n = QInputDialog::getInt(this,"10","100-11=");
    if(n!=89)
    {
        if(language==0)
        {
            QMessageBox::information(this,"wrong_answer", "Sory,that's not a good answer. The good answer is 89.");
        }
        if(language==1)
        {
            QMessageBox::information(this,"zła_odpowiedź", "Przykro mi to nie jest dobra odpowiedź. Dobra odpowiedź to 89.");
        }
        if(language==2)
        {
            QMessageBox::information(this,"falsche_Antwort", "Es tut mir leid, das ist keine gute Antwort. Eine gute Antwort ist 89.");
        }
        ui->pushButton_10->setStyleSheet("background-color: red;");
    }
    else
    {
        if(language==0)
        {
            QMessageBox::information(this,"good_answer", "Well done,that's a good answer!");
        }
        if(language==1)
        {
            QMessageBox::information(this,"dobra_odpowiedź", "Dobra robota, to dobra odpowiedź!");
        }
        if(language==2)
        {
            QMessageBox::information(this,"gute_Antwort", "Gut gemacht, das ist eine gute Antwort!");
        }
        ui->pushButton_10->setStyleSheet("background-color: green;");
        ui->ProgressBar->setValue(value2+10);
        value2+=10;

    }


}
