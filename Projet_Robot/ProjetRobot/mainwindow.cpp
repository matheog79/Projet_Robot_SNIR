#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Instanciation de la socket
    tcpSocket = new QTcpSocket(this);

    // Attachement d'un slot qui sera appelé à chaque fois que des données arrivent
    connect(tcpSocket, SIGNAL(readyRead()), this, SLOT(gerer_donnees()));

    // Idem pour les erreurs
    connect(tcpSocket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(afficher_erreur(QAbstractSocket::SocketError)));

    ui->Av->setFocus();

    // Instanciation de l'image (dans constructeur)
    pCarte = new QImage();
    pFond = new QImage();

    // Chargement depuis un fichier
    pCarte->load("C:/Users/gonca/Documents/PROJET_/Projet_RobodiK/ProjetRobot/sol.jpg");
    pFond->load("C:/Users/gonca/Documents/PROJET_/Projet_RobodiK/ProjetRobot/fond.jpg");

    // Affichage dans un QLabel, ici label_carte
    ui->carte->setPixmap(QPixmap::fromImage(*pCarte));
    ui->fond->setPixmap(QPixmap::fromImage(*pFond));

    //création d'un timer pour récupérer la trame
    pTimer = new QTimer;
    connect(pTimer, SIGNAL(timeout()), this, SLOT(demander_Trame()));
}

MainWindow::~MainWindow()
{
    // Arrêt du timer
    pTimer->stop();

    //Destruction du timer
    delete pTimer;

    //Desctruction de l'interface graphique
    delete pCarte;
    delete pFond;

    // Destruction de la socket
    tcpSocket->abort();
    delete tcpSocket;

    // Destruction de l'interface graphique
    delete ui;
}

void MainWindow::on_SeConnecter_clicked()
{
    //Récupération des paramètres
    QString adresseIp = ui->RepIP->text();
    unsigned short port = ui->RepPort->text().toInt();

    //Connection
    tcpSocket->connectToHost(adresseIp, port);

    //test
    tcpSocket->write("OK");

    //Lancement du timer
    pTimer->start(2000);
}

void MainWindow::on_SeDeconnecter_clicked()
{
    //Deconnection
    tcpSocket->close();
}


QString MainWindow::dechiffrer_trame(QString enc)
{
    QString decoder_trame;
    int key[3] = {4,8,3};

        for (int i = 0; i < enc.size() ; i++)
        {
           QChar trame( enc[i].toLatin1() ^ (key[i%3]+i) %20);
           decoder_trame += trame;

        }

        return decoder_trame;
}


void MainWindow::gerer_donnees()
{
    //Récupération des données
    QByteArray reponse = tcpSocket->readAll();
    QString enc = dechiffrer_trame(reponse);

    //Découpage de la trame
    QStringList trameDecoupee = enc.split(";");
    qDebug() << reponse << "\n";
    qDebug() << enc << "\n";

    if (trameDecoupee.size() >= 4)
    {
        //taux SNIRIUM
        unsigned short tauxSNIRIUM = trameDecoupee[2].toShort();
        ui->RepTauxSnirium->setText(QString("%1").arg(tauxSNIRIUM));

        //Angle
        short angle = trameDecoupee[0].toShort();
        if (angle > 360 || angle < -360)
        {
            angle = angle % 360;
        }
        ui->RepAngle->setText(QString("%1").arg(angle));

        //Distance
        float distance = trameDecoupee[1].toFloat();
        ui->RepPosition->setText(QString("%1").arg(distance));
        if (distance <= 10)
        {
            tcpSocket->write("Y");
        }
     }
}


void MainWindow::on_Av_clicked()
{

    tcpSocket->write("Z");
}


void MainWindow::on_Ar_clicked()
{
    tcpSocket->write("S");
}


void MainWindow::on_Dr_clicked()
{
    tcpSocket->write("D");
}


void MainWindow::on_Ga_clicked()
{
    tcpSocket->write("Q");
}


void MainWindow::on_St_clicked()
{
    tcpSocket->write("T");
}


void MainWindow::on_MonterBras_clicked()
{
    tcpSocket->write("A");
}


void MainWindow::on_BaisserBras_clicked()
{
    tcpSocket->write("E");
}

void MainWindow::afficher_erreur(QAbstractSocket::SocketError socketError)
{
    switch (socketError)
    {
        case QAbstractSocket::RemoteHostClosedError:
            break;
        case QAbstractSocket::HostNotFoundError:
            QMessageBox::information(this, tr("Client TCP"),
                                     tr("Hôte introuvable"));
            break;
        case QAbstractSocket::ConnectionRefusedError:
            QMessageBox::information(this, tr("Client TCP"),
                                     tr("Connexion refusée"));
            break;
        default:
            QMessageBox::information(this, tr("Client TCP"),
                                     tr("Erreur : %1.")
                                     .arg(tcpSocket->errorString()));
    }
}

void MainWindow::demander_Trame()
{
    tcpSocket->write("Y");
}






void MainWindow::on_rec_trame_clicked()
{
    tcpSocket->write("Y");
}

