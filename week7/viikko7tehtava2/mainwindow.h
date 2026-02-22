#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE

namespace Ui{
class MainWindow;
}

QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    QString number1 = "";
    QString number2 = "";

    float result = 0;

    short state = 1;
    short Operaatio = 0;


private slots:
    void numberClickHandler();

    void on_add_clicked();
    void on_sub_clicked();
    void on_mul_clicked();
    void on_div_clicked();

    void on_enter_clicked();
    void on_clear_clicked();


};
#endif // MAINWINDOW_H
