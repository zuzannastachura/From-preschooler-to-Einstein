#include <QApplication>
#include <QMessageBox>
#include <QAnimationGroup>
#include <QAbstractAnimation>
#include <QPropertyAnimation>
#include <QLabel>

#include "mainwindow.h"
#include "mywidget.h"
#include "dialog3.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setGeometry(0, 0, 426, 645);
    w.show();



    return a.exec();
}
