#ifndef TEACHERMANAGER_H
#define TEACHERMANAGER_H

#include <QWidget>

namespace Ui {
class TeacherManager;
}

class TeacherManager : public QWidget
{
    Q_OBJECT

public:
    explicit TeacherManager(QWidget *parent = nullptr);
    ~TeacherManager();

private:
    Ui::TeacherManager *ui;
};

#endif // TEACHERMANAGER_H
