
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFont>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow), timer(new QTimer(this)), player1Time(0), player2Time(0), gameTime(0), player1Turn(true), gameRunning(false){

    ui->setupUi(this);

    ui->progressBar1->setRange(0,100);
    ui->progressBar2->setRange(0,100);

    connect(timer, &QTimer::timeout, this, &MainWindow::timeout);

    connect(ui->time120Button, &QPushButton::clicked, this, &MainWindow::select120Sec);
    connect(ui->time5MinButton, &QPushButton::clicked, this, &MainWindow::select5Min);
    connect(ui->startButton, &QPushButton::clicked, this, &MainWindow::startGame);
    connect(ui->stopButton, &QPushButton::clicked, this, &MainWindow::stopGame);
    connect(ui->switch1Button, &QPushButton::clicked, this, &MainWindow::switchPlayer1);
    connect(ui->switch2Button, &QPushButton::clicked, this, &MainWindow::switchPlayer2);

    setGameInfoText("select game time", 14);
}


MainWindow::~MainWindow(){
    delete ui;
}



void MainWindow::select120Sec(){
    gameTime = 120;
    player1Time = gameTime;
    player2Time = gameTime;

    updateProgressBars();
    setGameInfoText("ready to play", 14);
}

void MainWindow::select5Min(){

    gameTime = 300;
    player1Time = gameTime;
    player2Time = gameTime;

    updateProgressBars();
    setGameInfoText("ready to play", 14);
}



void MainWindow::startGame(){


    if(gameTime == 0){
        return;
    }


    player1Turn = true;
    gameRunning = true;
    timer->start(1000);

    setGameInfoText("game ongoing", 14);
}



void MainWindow::stopGame(){

    if(!gameRunning){
        return;
    }

    timer->stop();
    gameRunning = false;

    setGameInfoText("select new game time.", 16);
}

void MainWindow::switchPlayer1(){

    if(gameRunning && player1Turn){

        player1Turn = false;
    }
}



void MainWindow::switchPlayer2(){

    if(gameRunning && !player1Turn){
        player1Turn = true;
    }
}


void MainWindow::timeout(){

    if(!gameRunning){

        return;
    }

    if(player1Turn){

        player1Time--;

        if(player1Time <= 0){
            player1Time = 0;
            endGame("Player 2 Wins!");
        }
    }

    else{

        player2Time--;

        if(player2Time <= 0){
            player2Time = 0;
            endGame("Player 1 Wins!");
        }

    }

    updateProgressBars();
}

void MainWindow::updateProgressBars(){

    if(gameTime == 0){
        return;
    }

    ui->progressBar1->setValue((player1Time * 100) / gameTime);
    ui->progressBar2->setValue((player2Time * 100) / gameTime);
}

void MainWindow::endGame(QString message){

    timer->stop();
    gameRunning = false;

    setGameInfoText(message + "\nSelect new game time", 16);
}

void MainWindow::setGameInfoText(QString text, short size){

    QFont font;

    font.setPointSize(size);
    ui->infoLabel->setFont(font);
    ui->infoLabel->setText(text);
}
