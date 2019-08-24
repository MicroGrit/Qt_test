#ifndef LISTVIEWMODEL_H
#define LISTVIEWMODEL_H

#include <QWidget>
#include <QStandardItemModel>

namespace Ui {
class ListViewModel;
}

class ListViewModel : public QWidget
{
    Q_OBJECT

public:
    explicit ListViewModel(QWidget *parent = nullptr);
    ~ListViewModel();

private slots:
    void on_BtnOK_clicked();

    void on_BtnCancel_clicked();

    void on_comboBox_currentIndexChanged(const QString &arg1);

private:
    Ui::ListViewModel *ui;
    QStandardItemModel *m_StuModel;
    QStandardItemModel *m_TeacherModel;
    QStandardItemModel *m_WorkerModel;

    void initModel();
    void setStyleSheet(QString sheetName);
};

#endif // LISTVIEWMODEL_H
