#ifndef MYTIMERWIDGET_H
#define MYTIMERWIDGET_H

#include <QWidget>
#include <QTimer>
#include <QTime>

namespace Ui {
class myTimerWidget;
}

class myTimerWidget : public QWidget
{
    Q_OBJECT

public:
    explicit myTimerWidget(QWidget *parent = nullptr);
    ~myTimerWidget();

protected:
    void timerEvent(QTimerEvent *event);

private:
    Ui::myTimerWidget *ui;
};

#endif // MYTIMERWIDGET_H
