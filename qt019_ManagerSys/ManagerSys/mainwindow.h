#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "stumanager.h"
#include "teachermanager.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    StuManager *m_pStuManager;
    TeacherManager *m_pTeacherManager;

    void initUI();
    void createCornerBtn();
};

#endif // MAINWINDOW_H
