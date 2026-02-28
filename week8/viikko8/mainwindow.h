#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE


namespace Ui {
    class MainWindow;
}

QT_END_NAMESPACE



class MainWindow : public QMainWindow{

    Q_OBJECT


public:

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void timeout();
    void select120Sec();
    void select5Min();
    void startGame();
    void stopGame();
    void switchPlayer1();
    void switchPlayer2();


private:

    void updateProgressBars();
    void setGameInfoText(QString text, short size);
    void endGame(QString message);

    Ui::MainWindow *ui;
    QTimer *timer;

    int player1Time;
    int player2Time;
    int gameTime;

    bool player1Turn;
    bool gameRunning;

};



#endif
