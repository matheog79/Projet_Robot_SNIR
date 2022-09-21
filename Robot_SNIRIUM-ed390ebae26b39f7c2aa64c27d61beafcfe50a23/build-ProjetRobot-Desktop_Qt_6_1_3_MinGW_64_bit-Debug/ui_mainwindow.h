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
    QLabel *carte;
    QLabel *TauxSnirium;
    QLabel *DistanceObstacle;
    QLineEdit *RepTauxSnirium;
    QLineEdit *RepPosition;
    QLineEdit *RepIP;
    QProgressBar *Batterie;
    QLineEdit *RepAngle;
    QLabel *Port;
    QLineEdit *RepDistanceObstacle;
    QLabel *Angle;
    QLabel *Position;
    QPushButton *SeConnecter;
    QLabel *label;
    QLabel *Ip;
    QPushButton *SeDeconnecter;
    QLineEdit *RepPort;
    QPushButton *MonterBras;
    QPushButton *BaisserBras;
    QPushButton *St;
    QLabel *fond;
    QPushButton *Ga;
    QPushButton *Ar;
    QPushButton *rec_trame;
    QPushButton *Dr;
    QPushButton *Av;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1429, 1014);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        carte = new QLabel(centralwidget);
        carte->setObjectName(QString::fromUtf8("carte"));
        carte->setGeometry(QRect(50, 250, 500, 500));
        carte->setStyleSheet(QString::fromUtf8(""));
        TauxSnirium = new QLabel(centralwidget);
        TauxSnirium->setObjectName(QString::fromUtf8("TauxSnirium"));
        TauxSnirium->setGeometry(QRect(70, 30, 201, 30));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(false);
        TauxSnirium->setFont(font);
        TauxSnirium->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        DistanceObstacle = new QLabel(centralwidget);
        DistanceObstacle->setObjectName(QString::fromUtf8("DistanceObstacle"));
        DistanceObstacle->setGeometry(QRect(10, 80, 261, 31));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        DistanceObstacle->setFont(font1);
        DistanceObstacle->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        RepTauxSnirium = new QLineEdit(centralwidget);
        RepTauxSnirium->setObjectName(QString::fromUtf8("RepTauxSnirium"));
        RepTauxSnirium->setGeometry(QRect(270, 30, 191, 31));
        RepTauxSnirium->setFont(font1);
        RepTauxSnirium->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        RepTauxSnirium->setAlignment(Qt::AlignCenter);
        RepPosition = new QLineEdit(centralwidget);
        RepPosition->setObjectName(QString::fromUtf8("RepPosition"));
        RepPosition->setGeometry(QRect(270, 80, 191, 31));
        RepPosition->setFont(font1);
        RepPosition->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        RepPosition->setAlignment(Qt::AlignCenter);
        RepIP = new QLineEdit(centralwidget);
        RepIP->setObjectName(QString::fromUtf8("RepIP"));
        RepIP->setGeometry(QRect(830, 40, 191, 31));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        RepIP->setFont(font2);
        RepIP->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        RepIP->setAlignment(Qt::AlignCenter);
        Batterie = new QProgressBar(centralwidget);
        Batterie->setObjectName(QString::fromUtf8("Batterie"));
        Batterie->setGeometry(QRect(960, 910, 291, 31));
        Batterie->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Batterie->setValue(15);
        RepAngle = new QLineEdit(centralwidget);
        RepAngle->setObjectName(QString::fromUtf8("RepAngle"));
        RepAngle->setGeometry(QRect(960, 860, 291, 31));
        RepAngle->setFont(font1);
        RepAngle->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        Port = new QLabel(centralwidget);
        Port->setObjectName(QString::fromUtf8("Port"));
        Port->setGeometry(QRect(740, 90, 81, 30));
        Port->setFont(font1);
        Port->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        RepDistanceObstacle = new QLineEdit(centralwidget);
        RepDistanceObstacle->setObjectName(QString::fromUtf8("RepDistanceObstacle"));
        RepDistanceObstacle->setGeometry(QRect(960, 810, 291, 31));
        RepDistanceObstacle->setFont(font1);
        RepDistanceObstacle->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
""));
        Angle = new QLabel(centralwidget);
        Angle->setObjectName(QString::fromUtf8("Angle"));
        Angle->setGeometry(QRect(850, 860, 101, 31));
        Angle->setFont(font1);
        Angle->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        Position = new QLabel(centralwidget);
        Position->setObjectName(QString::fromUtf8("Position"));
        Position->setGeometry(QRect(810, 810, 151, 30));
        Position->setFont(font1);
        Position->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        SeConnecter = new QPushButton(centralwidget);
        SeConnecter->setObjectName(QString::fromUtf8("SeConnecter"));
        SeConnecter->setGeometry(QRect(1030, 40, 150, 81));
        QFont font3;
        font3.setBold(true);
        SeConnecter->setFont(font3);
        SeConnecter->setStyleSheet(QString::fromUtf8("background-color: rgb(13, 163, 2);\n"
"color: rgb(0, 0, 0);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(820, 910, 141, 30));
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        Ip = new QLabel(centralwidget);
        Ip->setObjectName(QString::fromUtf8("Ip"));
        Ip->setGeometry(QRect(660, 40, 161, 31));
        Ip->setFont(font1);
        Ip->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        SeDeconnecter = new QPushButton(centralwidget);
        SeDeconnecter->setObjectName(QString::fromUtf8("SeDeconnecter"));
        SeDeconnecter->setGeometry(QRect(1190, 40, 91, 81));
        SeDeconnecter->setFont(font3);
        SeDeconnecter->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        RepPort = new QLineEdit(centralwidget);
        RepPort->setObjectName(QString::fromUtf8("RepPort"));
        RepPort->setGeometry(QRect(830, 90, 191, 31));
        RepPort->setFont(font2);
        RepPort->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        RepPort->setAlignment(Qt::AlignCenter);
        MonterBras = new QPushButton(centralwidget);
        MonterBras->setObjectName(QString::fromUtf8("MonterBras"));
        MonterBras->setGeometry(QRect(850, 290, 111, 111));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("MS Shell Dlg 2")});
        font4.setPointSize(20);
        font4.setBold(false);
        font4.setItalic(false);
        MonterBras->setFont(font4);
        MonterBras->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 20pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
""));
        BaisserBras = new QPushButton(centralwidget);
        BaisserBras->setObjectName(QString::fromUtf8("BaisserBras"));
        BaisserBras->setGeometry(QRect(1130, 290, 111, 111));
        BaisserBras->setFont(font4);
        BaisserBras->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 20pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
""));
        St = new QPushButton(centralwidget);
        St->setObjectName(QString::fromUtf8("St"));
        St->setGeometry(QRect(960, 400, 170, 170));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("MS Shell Dlg 2")});
        font5.setPointSize(50);
        font5.setBold(false);
        font5.setItalic(false);
        St->setFont(font5);
        St->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 50pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
""));
        fond = new QLabel(centralwidget);
        fond->setObjectName(QString::fromUtf8("fond"));
        fond->setGeometry(QRect(0, -20, 1900, 1200));
        fond->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        Ga = new QPushButton(centralwidget);
        Ga->setObjectName(QString::fromUtf8("Ga"));
        Ga->setGeometry(QRect(790, 400, 170, 170));
        Ga->setFont(font5);
        Ga->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 50pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
""));
        Ar = new QPushButton(centralwidget);
        Ar->setObjectName(QString::fromUtf8("Ar"));
        Ar->setGeometry(QRect(960, 570, 171, 161));
        Ar->setFont(font5);
        Ar->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 50pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
""));
        rec_trame = new QPushButton(centralwidget);
        rec_trame->setObjectName(QString::fromUtf8("rec_trame"));
        rec_trame->setGeometry(QRect(1130, 570, 81, 81));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("MS Shell Dlg 2")});
        font6.setPointSize(6);
        font6.setBold(false);
        font6.setItalic(false);
        rec_trame->setFont(font6);
        rec_trame->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 6pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
""));
        Dr = new QPushButton(centralwidget);
        Dr->setObjectName(QString::fromUtf8("Dr"));
        Dr->setGeometry(QRect(1130, 400, 170, 170));
        Dr->setFont(font5);
        Dr->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 50pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
""));
        Av = new QPushButton(centralwidget);
        Av->setObjectName(QString::fromUtf8("Av"));
        Av->setGeometry(QRect(960, 230, 170, 170));
        Av->setFont(font5);
        Av->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 50pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        fond->raise();
        TauxSnirium->raise();
        DistanceObstacle->raise();
        RepTauxSnirium->raise();
        RepPosition->raise();
        RepIP->raise();
        Batterie->raise();
        RepAngle->raise();
        Port->raise();
        RepDistanceObstacle->raise();
        Angle->raise();
        Position->raise();
        SeConnecter->raise();
        label->raise();
        Ip->raise();
        SeDeconnecter->raise();
        RepPort->raise();
        carte->raise();
        MonterBras->raise();
        BaisserBras->raise();
        St->raise();
        Ga->raise();
        Ar->raise();
        rec_trame->raise();
        Dr->raise();
        Av->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1429, 20));
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
        carte->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        TauxSnirium->setText(QCoreApplication::translate("MainWindow", "Taux snirium :", nullptr));
        DistanceObstacle->setText(QCoreApplication::translate("MainWindow", "Distance obstacle :", nullptr));
        RepIP->setText(QCoreApplication::translate("MainWindow", "192.168.1.171", nullptr));
        Port->setText(QCoreApplication::translate("MainWindow", "Port :", nullptr));
        Angle->setText(QCoreApplication::translate("MainWindow", "Angle :", nullptr));
        Position->setText(QCoreApplication::translate("MainWindow", "Distance :", nullptr));
        SeConnecter->setText(QCoreApplication::translate("MainWindow", "Connexion", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Batterie :", nullptr));
        Ip->setText(QCoreApplication::translate("MainWindow", "Adresse IP :", nullptr));
        SeDeconnecter->setText(QCoreApplication::translate("MainWindow", "D\303\251connexion", nullptr));
        RepPort->setText(QCoreApplication::translate("MainWindow", "1664", nullptr));
        MonterBras->setText(QCoreApplication::translate("MainWindow", "\342\207\247", nullptr));
#if QT_CONFIG(shortcut)
        MonterBras->setShortcut(QCoreApplication::translate("MainWindow", "A", nullptr));
#endif // QT_CONFIG(shortcut)
        BaisserBras->setText(QCoreApplication::translate("MainWindow", "\342\207\251", nullptr));
#if QT_CONFIG(shortcut)
        BaisserBras->setShortcut(QCoreApplication::translate("MainWindow", "E", nullptr));
#endif // QT_CONFIG(shortcut)
        St->setText(QCoreApplication::translate("MainWindow", "\360\237\233\221", nullptr));
#if QT_CONFIG(shortcut)
        St->setShortcut(QCoreApplication::translate("MainWindow", "T", nullptr));
#endif // QT_CONFIG(shortcut)
        fond->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        Ga->setText(QCoreApplication::translate("MainWindow", "\342\207\246", nullptr));
#if QT_CONFIG(shortcut)
        Ga->setShortcut(QCoreApplication::translate("MainWindow", "Q", nullptr));
#endif // QT_CONFIG(shortcut)
        Ar->setText(QCoreApplication::translate("MainWindow", "\342\207\251", nullptr));
#if QT_CONFIG(shortcut)
        Ar->setShortcut(QCoreApplication::translate("MainWindow", "S", nullptr));
#endif // QT_CONFIG(shortcut)
        rec_trame->setText(QCoreApplication::translate("MainWindow", "r\303\251cup\303\251rtion de tram", nullptr));
#if QT_CONFIG(shortcut)
        rec_trame->setShortcut(QCoreApplication::translate("MainWindow", "Y", nullptr));
#endif // QT_CONFIG(shortcut)
        Dr->setText(QCoreApplication::translate("MainWindow", "\342\207\250", nullptr));
#if QT_CONFIG(shortcut)
        Dr->setShortcut(QCoreApplication::translate("MainWindow", "D", nullptr));
#endif // QT_CONFIG(shortcut)
        Av->setText(QCoreApplication::translate("MainWindow", "\342\207\247", nullptr));
#if QT_CONFIG(shortcut)
        Av->setShortcut(QCoreApplication::translate("MainWindow", "Z", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
