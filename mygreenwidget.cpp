#include "mygreenwidget.h"
#include <QPainter>
#include <string>
using namespace std;
MyGreenWidget::MyGreenWidget(QWidget *parent) : QWidget(parent)
{

}


void MyGreenWidget::paintEvent(QPaintEvent* event)
{
     QPainter painter(this);
    painter.setBrush(QBrush(QColor("green")));
    QRectF rectangle(0.0,0.0,60.0,60.0);

 painter.drawEllipse(rectangle);
    string text =  "I'm ";
    text += std::to_string(number);
    text +=+ "!";
painter.drawText(15, 30, text.c_str());

}
