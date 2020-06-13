#ifndef DIALOG1_H
#define DIALOG1_H

#include <QDialog>

namespace Ui {
class Dialog1;
}

class Dialog1 : public QDialog
{
    Q_OBJECT

private slots:

    void on_pushButton_clicked();

public:
    explicit Dialog1(QWidget *parent = nullptr);
    void mousePressEvent(QMouseEvent *event) override;
    void keyPressEvent(QKeyEvent *event) override;
    ~Dialog1();

private:
    QVector<QWidget*> widgets;
    int number;
    Ui::Dialog1 *ui;
};

#endif // DIALOG1_H
