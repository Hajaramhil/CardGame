#ifndef GAMEOVER_H
#define GAMEOVER_H

#include <QMainWindow>

class GameOver : public QMainWindow
{
    Q_OBJECT
public:
      GameOver(bool winner,QWidget *parent = nullptr);



};

#endif // GAMEOVER_H
