#ifndef MYTIMER_H
#define MYTIMER_H

#include <QWidget>
#include <QTimer>

namespace Ui {
class myTimer;
}

class myTimer : public QWidget
{
    Q_OBJECT

public:
    explicit myTimer(QWidget *parent = nullptr);
    ~myTimer();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void onUpdateLcdNumber1();

    void onUpdateLcdNumber2();

private:
    Ui::myTimer *ui;

    QTimer *m_Timer1;
    QTimer *m_Timer2;
};

#endif // MYTIMER_H
