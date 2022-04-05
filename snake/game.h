#ifndef GAME_H
#define GAME_H

#include <QtWidgets/QWidget>
#include <QVector>
#include <QPoint>
#include <QKeyEvent>

class Game : public QWidget
{
public:
    Game();

protected:
    void timerEvent(QTimerEvent*) override;
    void keyPressEvent(QKeyEvent *) override;
    void paintEvent(QPaintEvent *) override;

private:
    static const int DOT_HEIGHT = 15;
    static const int DOT_WIDTH = 15;
    static const int FIELD_WIDTH = 30;
    static const int FIELD_HEIGHT = 30;
    static const int DELAY = 110;

    void doDrawing();
    void localApple();
    void move();
    void check_field();
    void gameOver();
    void check_apple();

    int m_timerId;

    QPoint m_apple;

    enum Directions {
        left,right,up,down
    };

    Directions m_dir;

    bool m_inGame;
    QVector<QPoint> m_dots;

    void initGame();


};

#endif // GAME_H
