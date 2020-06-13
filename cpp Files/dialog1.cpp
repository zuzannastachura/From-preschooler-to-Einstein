#include "dialog1.h"
#include "ui_dialog1.h"
#include "mywidget.h"
#include <QMouseEvent>
#include "mygreenwidget.h"
#include <QKeySequence>
#include <QMessageBox>

extern int language;
Dialog1::Dialog1(QWidget *parent) :
    QDialog(parent),number(0),
    ui(new Ui::Dialog1)
{
    ui->setupUi(this);
    if(language==1)
    {
        ui->pushButton->setText("Instrukcja");
    }
    if(language==2)
    {
        ui->pushButton->setText("Instruktion");
    }
}
void Dialog1::mousePressEvent(QMouseEvent* event)
{
   if (event->button() == Qt::LeftButton)
   {
       number++;
       auto x = event->x();
       auto y = event->y();
       MyWidget * mw = new MyWidget(this);
       mw->number = number;
       mw->setGeometry(x, y, 100, 100);
       mw->show();
       widgets.push_back(mw);
   }

   if (event->button() == Qt::RightButton)
   {
       number++;
       auto x = event->x();
       auto y = event->y();
       MyGreenWidget * mw = new MyGreenWidget(this);
       mw->number = number;
       mw->setGeometry(x, y, 100, 100);
       mw->show();
       widgets.push_back(mw);
   }
}

void Dialog1::keyPressEvent(QKeyEvent* event)
{
    if(event->matches(QKeySequence::Undo) ) {
        if(widgets.size() != 0) {
            delete widgets[widgets.size()-1];
            widgets.pop_back();
        }
}
}
void Dialog1::on_pushButton_clicked()
{

        if(language==1)
        {
            QMessageBox::information(this,"Instrukcja",  "Program po kliknięciu prawym przyciskiem myszy umieszcza się w"
                                                         " obszar roboczy okna to zielone kółko z odpowiednią liczbą, natomiast "
                                                         "po naciśnięciu lewego przycisku myszy program umieszcza w obszarze roboczym czerwony kwadrat z "
                                                         "odpowiedni numer. Ponadto program po naciśnięciu Ctrl-z usuwa ostatni "
                                                         "dodano obiekt z możliwością powrotu do pierwszego obiektu i usunięcia go."
                                                         "Celem tego ćwiczenia jest kształtowanie umiejętności liczenia elementów zestawu.");
        }
        if(language==2)
        {
            QMessageBox::information(this,"Instruktion", "Das Programm wird nach dem Klicken mit der rechten Maustaste eingefügt"
                                                         " Der Arbeitsbereich des Fensters ist ein grüner Kreis mit der entsprechenden Nummer, während "
                                                         "Nach dem Drücken der linken Maustaste platziert das Programm im Arbeitsbereich ein rotes Quadrat mit "
                                                         "die entsprechende Nummer. Außerdem entfernt das Programm nach Drücken von Strg-z das letzte "
                                                         "Objekt hinzugefügt mit der Möglichkeit, zum ersten Objekt zurückzukehren und es zu löschen."
                                                         "Der Zweck dieser Übung ist es, die Fähigkeiten zum Zählen der Elemente eines Satzes zu formen.");
        }
        if(language==0)
        {
            QMessageBox::information(this,"instruction", "The program after clicking the right mouse button places in"
                                                         " the working area of ​​the window a green circle with the appropriate number, while "
                                                         "after pressing the left mouse button the program places in the workspace a red square with "
                                                         "the appropriate number. In addition, the program after pressing Ctrl-z removes the last "
                                                         "added object with the possibility of going back to the first object and deleting it."
                                                         " The purpose of this exercise is to shape the skills of counting the elements of a set.");
        }

}
Dialog1::~Dialog1()
{
    delete ui;
}
