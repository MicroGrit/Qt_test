#ifndef EXTENSIONDIALOG_H
#define EXTENSIONDIALOG_H

#include <QDialog>

namespace Ui {
class ExtensionDialog;
}

class ExtensionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ExtensionDialog(QWidget *parent = nullptr);
    ~ExtensionDialog();

private slots:
    void on_detailButton_clicked();

private:
    Ui::ExtensionDialog *ui;
};

#endif // EXTENSIONDIALOG_H
