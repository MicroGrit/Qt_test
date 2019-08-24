#ifndef LINEEDIT_H
#define LINEEDIT_H

#include <QMainWindow>
#include <QAction>
#include <QIcon>
#include <QMessageBox>

namespace Ui {
class LineEdit;
}

class LineEdit : public QMainWindow
{
    Q_OBJECT

public:
    explicit LineEdit(QWidget *parent = nullptr);
    ~LineEdit();

private:
    Ui::LineEdit *ui;

private slots:
    void on_ClearContents();
    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
};

#endif // LINEEDIT_H
