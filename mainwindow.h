#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;

public slots:
    void add();
    void sub();
    void mul();
    void div();

    void addPrep();
    void subPrep();
    void mulPrep();
    void divPrep();

    void calc();

    void about();

    void scraptoref();
};

#endif // MAINWINDOW_H
