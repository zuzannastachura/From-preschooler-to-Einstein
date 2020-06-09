#ifndef MYGREENWIDGET_H
#define MYGREENWIDGET_H

#include <QWidget>

class MyGreenWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MyGreenWidget(QWidget *parent = nullptr);

    void paintEvent(QPaintEvent *event) override;
 int number;
};

#endif // MYGREENWIDGET_H
