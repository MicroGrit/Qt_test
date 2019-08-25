#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QWidget>
#include <QTranslator>
#include <QEvent>

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QWidget
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();
    void changeEvent(QEvent *e);

private slots:
    void on_comboBox_activated(int index);

private:
    Ui::LoginDialog *ui;
    QTranslator *m_QTranslator;
    bool m_ISCN;

};

#endif // LOGINDIALOG_H
