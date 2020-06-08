#include "mywidget.h"
#include <QPainter>
#include <string>
using namespace std;
MyWidget::MyWidget(QWidget *parent) : QWidget(parent)
{

}

void MyWidget::paintEvent(QPaintEvent* event)
{
    QPainter painter(this);
    painter.setBrush(QBrush(QColor("red")));
    painter.drawRect(this->rect());
    string text =  "I'm ";
    text += std::to_string(number);
    text +=+ "!";
    painter.drawText(20, 20, text.c_str());
}
