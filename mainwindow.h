#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <DMainWindow>

DWIDGET_USE_NAMESPACE

class MainWindow : public DMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

};

#endif // MAINWINDOW_H
