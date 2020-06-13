#include "mygreenwidget.h"
#include <QPainter>
#include <string>
using namespace std;
extern int language;
MyGreenWidget::MyGreenWidget(QWidget *parent) : QWidget(parent)
{

}


void MyGreenWidget::paintEvent(QPaintEvent* event)
{
     QPainter painter(this);
    painter.setBrush(QBrush(QColor("green")));
    QRectF rectangle(0.0,0.0,80.0,80.0);
 painter.drawEllipse(rectangle);
 string text;
 if(language==1)
 {
    text =  "Jestem ";
 }
 if(language==2)
 {
    text =  "Ich bin ";
 }
 if(language==0)
 {
    text =  "I'm ";
 }
    text += std::to_string(number);
    text +=+ "!";
painter.drawText(15, 30, text.c_str());

}
