/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *switch1Button;
    QPushButton *switch2Button;
    QPushButton *time5MinButton;
    QPushButton *stopButton;
    QPushButton *startButton;
    QPushButton *time120Button;
    QLabel *infoLabel;
    QProgressBar *progressBar1;
    QProgressBar *progressBar2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setIconSize(QSize(10, 10));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        switch1Button = new QPushButton(centralwidget);
        switch1Button->setObjectName("switch1Button");
        switch1Button->setGeometry(QRect(60, 50, 80, 18));
        switch2Button = new QPushButton(centralwidget);
        switch2Button->setObjectName("switch2Button");
        switch2Button->setGeometry(QRect(210, 50, 80, 18));
        time5MinButton = new QPushButton(centralwidget);
        time5MinButton->setObjectName("time5MinButton");
        time5MinButton->setGeometry(QRect(180, 140, 51, 18));
        stopButton = new QPushButton(centralwidget);
        stopButton->setObjectName("stopButton");
        stopButton->setGeometry(QRect(190, 190, 80, 18));
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName("startButton");
        startButton->setGeometry(QRect(80, 190, 80, 18));
        time120Button = new QPushButton(centralwidget);
        time120Button->setObjectName("time120Button");
        time120Button->setGeometry(QRect(120, 140, 51, 18));
        infoLabel = new QLabel(centralwidget);
        infoLabel->setObjectName("infoLabel");
        infoLabel->setGeometry(QRect(10, 80, 331, 31));
        infoLabel->setScaledContents(true);
        infoLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        progressBar1 = new QProgressBar(centralwidget);
        progressBar1->setObjectName("progressBar1");
        progressBar1->setGeometry(QRect(0, 10, 141, 23));
        progressBar1->setValue(24);
        progressBar2 = new QProgressBar(centralwidget);
        progressBar2->setObjectName("progressBar2");
        progressBar2->setGeometry(QRect(210, 10, 151, 23));
        progressBar2->setValue(24);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        switch1Button->setText(QCoreApplication::translate("MainWindow", "Switch player", nullptr));
        switch2Button->setText(QCoreApplication::translate("MainWindow", "Switch player", nullptr));
        time5MinButton->setText(QCoreApplication::translate("MainWindow", "5 min", nullptr));
        stopButton->setText(QCoreApplication::translate("MainWindow", "STOP GAME", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "START GAME", nullptr));
        time120Button->setText(QCoreApplication::translate("MainWindow", "120 sec", nullptr));
        infoLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
