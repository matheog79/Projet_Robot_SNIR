/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QLabel *Carte;
    QLabel *TauxSnirium;
    QLabel *DistanceObstacle;
    QLineEdit *RepTauxSnirium;
    QLineEdit *RepDistanceObstacle;
    QLabel *Ip;
    QLabel *Port;
    QLineEdit *RepIP;
    QLineEdit *RepPort;
    QPushButton *SeConnecter;
    QPushButton *SeDeconnecter;
    QPushButton *Av;
    QPushButton *Dr;
    QPushButton *St;
    QPushButton *Ga;
    QPushButton *Ar;
    QLabel *Position;
    QLabel *Angle;
    QLineEdit *RepPosition;
    QLineEdit *RepAngle;
    QPushButton *MonterBras;
    QPushButton *BaisserBras;
    QProgressBar *Batterie;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1306, 888);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Carte = new QLabel(centralwidget);
        Carte->setObjectName(QString::fromUtf8("Carte"));
        Carte->setGeometry(QRect(25, 100, 700, 700));
        TauxSnirium = new QLabel(centralwidget);
        TauxSnirium->setObjectName(QString::fromUtf8("TauxSnirium"));
        TauxSnirium->setGeometry(QRect(125, 15, 150, 30));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(false);
        TauxSnirium->setFont(font);
        DistanceObstacle = new QLabel(centralwidget);
        DistanceObstacle->setObjectName(QString::fromUtf8("DistanceObstacle"));
        DistanceObstacle->setGeometry(QRect(125, 60, 190, 30));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        DistanceObstacle->setFont(font1);
        RepTauxSnirium = new QLineEdit(centralwidget);
        RepTauxSnirium->setObjectName(QString::fromUtf8("RepTauxSnirium"));
        RepTauxSnirium->setGeometry(QRect(350, 15, 150, 30));
        RepTauxSnirium->setFont(font1);
        RepTauxSnirium->setAlignment(Qt::AlignCenter);
        RepDistanceObstacle = new QLineEdit(centralwidget);
        RepDistanceObstacle->setObjectName(QString::fromUtf8("RepDistanceObstacle"));
        RepDistanceObstacle->setGeometry(QRect(350, 60, 150, 30));
        RepDistanceObstacle->setFont(font1);
        RepDistanceObstacle->setAlignment(Qt::AlignCenter);
        Ip = new QLabel(centralwidget);
        Ip->setObjectName(QString::fromUtf8("Ip"));
        Ip->setGeometry(QRect(700, 15, 50, 30));
        Ip->setFont(font1);
        Port = new QLabel(centralwidget);
        Port->setObjectName(QString::fromUtf8("Port"));
        Port->setGeometry(QRect(700, 60, 50, 30));
        Port->setFont(font1);
        RepIP = new QLineEdit(centralwidget);
        RepIP->setObjectName(QString::fromUtf8("RepIP"));
        RepIP->setGeometry(QRect(800, 15, 150, 30));
        RepIP->setFont(font1);
        RepIP->setAlignment(Qt::AlignCenter);
        RepPort = new QLineEdit(centralwidget);
        RepPort->setObjectName(QString::fromUtf8("RepPort"));
        RepPort->setGeometry(QRect(800, 60, 150, 30));
        RepPort->setFont(font1);
        RepPort->setAlignment(Qt::AlignCenter);
        SeConnecter = new QPushButton(centralwidget);
        SeConnecter->setObjectName(QString::fromUtf8("SeConnecter"));
        SeConnecter->setGeometry(QRect(1050, 15, 150, 30));
        SeDeconnecter = new QPushButton(centralwidget);
        SeDeconnecter->setObjectName(QString::fromUtf8("SeDeconnecter"));
        SeDeconnecter->setGeometry(QRect(1050, 60, 150, 30));
        Av = new QPushButton(centralwidget);
        Av->setObjectName(QString::fromUtf8("Av"));
        Av->setGeometry(QRect(950, 200, 150, 150));
        Av->setFont(font1);
        Dr = new QPushButton(centralwidget);
        Dr->setObjectName(QString::fromUtf8("Dr"));
        Dr->setGeometry(QRect(1110, 350, 150, 150));
        Dr->setFont(font1);
        St = new QPushButton(centralwidget);
        St->setObjectName(QString::fromUtf8("St"));
        St->setGeometry(QRect(950, 350, 150, 150));
        St->setFont(font1);
        Ga = new QPushButton(centralwidget);
        Ga->setObjectName(QString::fromUtf8("Ga"));
        Ga->setGeometry(QRect(790, 350, 150, 150));
        Ga->setFont(font1);
        Ar = new QPushButton(centralwidget);
        Ar->setObjectName(QString::fromUtf8("Ar"));
        Ar->setGeometry(QRect(950, 500, 150, 150));
        Ar->setFont(font1);
        Position = new QLabel(centralwidget);
        Position->setObjectName(QString::fromUtf8("Position"));
        Position->setGeometry(QRect(800, 700, 100, 30));
        Position->setFont(font1);
        Angle = new QLabel(centralwidget);
        Angle->setObjectName(QString::fromUtf8("Angle"));
        Angle->setGeometry(QRect(800, 745, 100, 30));
        Angle->setFont(font1);
        RepPosition = new QLineEdit(centralwidget);
        RepPosition->setObjectName(QString::fromUtf8("RepPosition"));
        RepPosition->setGeometry(QRect(950, 700, 150, 30));
        RepPosition->setFont(font1);
        RepAngle = new QLineEdit(centralwidget);
        RepAngle->setObjectName(QString::fromUtf8("RepAngle"));
        RepAngle->setGeometry(QRect(950, 745, 150, 30));
        RepAngle->setFont(font1);
        MonterBras = new QPushButton(centralwidget);
        MonterBras->setObjectName(QString::fromUtf8("MonterBras"));
        MonterBras->setGeometry(QRect(810, 520, 100, 100));
        MonterBras->setFont(font1);
        BaisserBras = new QPushButton(centralwidget);
        BaisserBras->setObjectName(QString::fromUtf8("BaisserBras"));
        BaisserBras->setGeometry(QRect(1140, 520, 100, 100));
        BaisserBras->setFont(font1);
        Batterie = new QProgressBar(centralwidget);
        Batterie->setObjectName(QString::fromUtf8("Batterie"));
        Batterie->setGeometry(QRect(960, 790, 100, 30));
        Batterie->setValue(24);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(800, 790, 100, 30));
        label->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1306, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Carte->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        TauxSnirium->setText(QCoreApplication::translate("MainWindow", "Taux snirium :", nullptr));
        DistanceObstacle->setText(QCoreApplication::translate("MainWindow", "Distance obstacle :", nullptr));
        Ip->setText(QCoreApplication::translate("MainWindow", "Ip :", nullptr));
        Port->setText(QCoreApplication::translate("MainWindow", "Port :", nullptr));
        RepIP->setText(QCoreApplication::translate("MainWindow", "192.168.1.182", nullptr));
        RepPort->setText(QCoreApplication::translate("MainWindow", "1665", nullptr));
        SeConnecter->setText(QCoreApplication::translate("MainWindow", "Se connecter", nullptr));
        SeDeconnecter->setText(QCoreApplication::translate("MainWindow", "Se d\303\251connecter", nullptr));
        Av->setText(QCoreApplication::translate("MainWindow", "Avancer", nullptr));
#if QT_CONFIG(shortcut)
        Av->setShortcut(QCoreApplication::translate("MainWindow", "Z", nullptr));
#endif // QT_CONFIG(shortcut)
        Dr->setText(QCoreApplication::translate("MainWindow", "Droite", nullptr));
#if QT_CONFIG(shortcut)
        Dr->setShortcut(QCoreApplication::translate("MainWindow", "D", nullptr));
#endif // QT_CONFIG(shortcut)
        St->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
#if QT_CONFIG(shortcut)
        St->setShortcut(QCoreApplication::translate("MainWindow", "X", nullptr));
#endif // QT_CONFIG(shortcut)
        Ga->setText(QCoreApplication::translate("MainWindow", "Gauche", nullptr));
#if QT_CONFIG(shortcut)
        Ga->setShortcut(QCoreApplication::translate("MainWindow", "Q", nullptr));
#endif // QT_CONFIG(shortcut)
        Ar->setText(QCoreApplication::translate("MainWindow", "Reculer", nullptr));
#if QT_CONFIG(shortcut)
        Ar->setShortcut(QCoreApplication::translate("MainWindow", "S", nullptr));
#endif // QT_CONFIG(shortcut)
        Position->setText(QCoreApplication::translate("MainWindow", "Distance :", nullptr));
        Angle->setText(QCoreApplication::translate("MainWindow", "Angle :", nullptr));
        MonterBras->setText(QCoreApplication::translate("MainWindow", "Lever", nullptr));
#if QT_CONFIG(shortcut)
        MonterBras->setShortcut(QCoreApplication::translate("MainWindow", "A", nullptr));
#endif // QT_CONFIG(shortcut)
        BaisserBras->setText(QCoreApplication::translate("MainWindow", "Baisser", nullptr));
#if QT_CONFIG(shortcut)
        BaisserBras->setShortcut(QCoreApplication::translate("MainWindow", "E", nullptr));
#endif // QT_CONFIG(shortcut)
        label->setText(QCoreApplication::translate("MainWindow", "Batterie :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
