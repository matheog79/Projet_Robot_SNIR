#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QImage>
#include <QTimer>
#include <QChar>

namespace Ui {
    class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_SeConnecter_clicked();

    void on_SeDeconnecter_clicked();

    void gerer_donnees();

    void afficher_erreur(QAbstractSocket::SocketError);

    void on_Av_clicked();

    void on_Ar_clicked();

    void on_Dr_clicked();

    void on_Ga_clicked();

    void on_St_clicked();

    void on_MonterBras_clicked();

    void on_BaisserBras_clicked();

    void demander_Trame();

    void on_rec_trame_clicked();

    QString dechiffrer_trame(QString enc);

private:
    Ui::MainWindow *ui;
    QTcpSocket *tcpSocket;
    QImage *pCarte;
    QImage *pFond;
    QTimer *pTimer;

};

#endif // MAINWINDOW_H
