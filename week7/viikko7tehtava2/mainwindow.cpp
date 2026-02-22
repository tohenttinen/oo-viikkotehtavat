#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);

    connect(ui->N0, SIGNAL(clicked()), this, SLOT(numberClickHandler()));
    connect(ui->N1, SIGNAL(clicked()), this, SLOT(numberClickHandler()));
    connect(ui->N2, SIGNAL(clicked()), this, SLOT(numberClickHandler()));
    connect(ui->N3, SIGNAL(clicked()), this, SLOT(numberClickHandler()));
    connect(ui->N4, SIGNAL(clicked()), this, SLOT(numberClickHandler()));
    connect(ui->N5, SIGNAL(clicked()), this, SLOT(numberClickHandler()));
    connect(ui->N6, SIGNAL(clicked()), this, SLOT(numberClickHandler()));
    connect(ui->N7, SIGNAL(clicked()), this, SLOT(numberClickHandler()));
    connect(ui->N8, SIGNAL(clicked()), this, SLOT(numberClickHandler()));
    connect(ui->N9, SIGNAL(clicked()), this, SLOT(numberClickHandler()));

}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::numberClickHandler(){

    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString value = button->text();

    if(state == 1){
        number1 += value;
        ui->num1->setText(number1);
    }

    else{
        number2 += value;
        ui->num2->setText(number2);
    }

}



void MainWindow::on_add_clicked(){

    Operaatio = 0;
    state = 2;
}

void MainWindow::on_sub_clicked(){

    Operaatio = 1;
    state = 2;
}

void MainWindow::on_mul_clicked(){

    Operaatio = 2;
    state = 2;
}

void MainWindow::on_div_clicked(){

    Operaatio = 3;
    state = 2;
}



void MainWindow::on_enter_clicked(){

    float n1 = number1.toFloat();
    float n2 = number2.toFloat();

    switch(Operaatio){
    case 0:

        result = n1 + n2; break;

    case 1:

        result = n1 - n2; break;

    case 2:

        result = n1 * n2; break;

    case 3:

        if(n2 != 0){

            result = n1 / n2;
        }

        else{

            result = 0;
        }

        break;
    }

    ui->result->setText(QString::number(result));
}



void MainWindow::on_clear_clicked()
{
    state = 1;

    number1 = "";
    number2 = "";

    ui->num1->clear();

    ui->num2->clear();

    ui->result->clear();

}
