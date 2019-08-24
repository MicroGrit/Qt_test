#ifndef MYLISTWIDGET_H
#define MYLISTWIDGET_H

#include <QWidget>

namespace Ui {
class myListWidget;
}

class myListWidget : public QWidget
{
    Q_OBJECT

public:
    explicit myListWidget(QWidget *parent = nullptr);
    ~myListWidget();

private:
    Ui::myListWidget *ui;

private slots:
    void onOKBtn();
    void onCancelBtn();

};

#endif // MYLISTWIDGET_H
