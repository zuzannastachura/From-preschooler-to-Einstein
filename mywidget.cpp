#include "mywidget.h"
#include <QPainter>
#include <string>
using namespace std;
extern int language;
MyWidget::MyWidget(QWidget *parent) : QWidget(parent)
{

}

void MyWidget::paintEvent(QPaintEvent* event)
{
    QPainter painter(this);
    painter.setBrush(QBrush(QColor("red")));
    painter.drawRect(this->rect());
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
    painter.drawText(20, 20, text.c_str());
}
