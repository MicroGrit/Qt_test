#ifndef MYBTN_H
#define MYBTN_H

#include <QDialog>
#include <QEvent>

namespace Ui {
class MyBtn;
}

class MyBtn : public QDialog
{
    Q_OBJECT

public:
    explicit MyBtn(QWidget *parent = nullptr);
    ~MyBtn();

private slots:
    void on_pushButton_1_clicked();
    void on_Btn_2();
    void enterEvent(QEvent *event);
    void leaveEvent(QEvent *event);
    bool eventFilter(QObject *obj,QEvent *event);

private:
    Ui::MyBtn *ui;
};

#endif // MYBTN_H
