#ifndef MYTREEWIDGET_H
#define MYTREEWIDGET_H

#include <QWidget>
#include <QMenu>
#include <QAction>
#include <QContextMenuEvent>
#include <QTreeWidgetItem>

namespace Ui {
class myTreeWidget;
}

class myTreeWidget : public QWidget
{
    Q_OBJECT

public:
    explicit myTreeWidget(QWidget *parent = nullptr);
    ~myTreeWidget();

    void initTreeWidget();
    void createMenu();

protected:
    void contextMenuEvent(QContextMenuEvent *e);

private:
    Ui::myTreeWidget *ui;
    QMenu *m_PopMenu;
    QMenu *m_AddMenu;
    QMenu *m_AddSchoolClass;

    QAction *m_AddSchoolAction;
    QAction *m_AddClassAction;

    QAction *m_DelAction;

private slots:
    void onSetLabText(QTreeWidgetItem *item,int);
    void onAddSchool();
    void onAddClass();
    void onDelAction();

};

#endif // MYTREEWIDGET_H
