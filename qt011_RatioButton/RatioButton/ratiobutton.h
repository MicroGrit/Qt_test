#ifndef RATIOBUTTON_H
#define RATIOBUTTON_H

#include <QDialog>

namespace Ui {
class RatioButton;
}

class RatioButton : public QDialog
{
    Q_OBJECT

public:
    explicit RatioButton(QWidget *parent = nullptr);
    ~RatioButton();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_radioButton_3_toggled(bool checked);

private:
    Ui::RatioButton *ui;
};

#endif // RATIOBUTTON_H
