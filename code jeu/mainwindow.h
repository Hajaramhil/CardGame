#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QWidget>
#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void Mindow();
    void buttonClick();
   void openSettingsDialog();



   private :
   int WindowHeight;
   int WindowWidth ;
   QWidget *window ;


};
#endif // MAINWINDOW_H
