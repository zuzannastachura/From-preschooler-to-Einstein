#include "dialog1.h"
#include "ui_dialog1.h"
#include "mywidget.h"
#include <QMouseEvent>
#include "mygreenwidget.h"
#include <QKeySequence>
#include <QMessageBox>

Dialog1::Dialog1(QWidget *parent) :
    QDialog(parent),number(0),
    ui(new Ui::Dialog1)
{
    ui->setupUi(this);
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
        QMessageBox::information(this,"instruction", "The program after clicking the right mouse button places in"
                                                     " the working area of ​​the window a green circle with the appropriate number, while "
                                                     "after pressing the left mouse button the program places in the workspace a red square with "
                                                     "the appropriate number. In addition, the program after pressing Ctrl-z removes the last "
                                                     "added object with the possibility of going back to the first object and deleting it."
                                                     " The purpose of this exercise is to shape the skills of counting the elements of a set.");
}
Dialog1::~Dialog1()
{
    delete ui;
}
