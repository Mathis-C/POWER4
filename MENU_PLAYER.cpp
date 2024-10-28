#include "menu_player.h"
#include "qobjectdefs.h"
#include <QMainWindow>
#include <QWidget>
#include <QComboBox>
#include <QPushButton>
#include <QLabel>
#include <QDoubleValidator>
#include <QVBoxLayout>
#include <QHBoxLayout>

MENU_PLAYER::MENU_PLAYER(QWidget *parent) : QWidget(parent) {


    nbrJ = new QLabel (" SELECT NUMBERS OF PLAYERS ", this);
    TwoP = new QPushButton ("2 PLAYERS" , this);
    ThreeP = new QPushButton (" 3 PLAYERSY" , this);
    return1 = new QPushButton ( " Return " , this);

   // QWidget *centralP = new QWidget(this);
    //setCentralWidget(centralP);

    QHBoxLayout * titreP = new QHBoxLayout();
    titreP->addStretch();
    titreP->addWidget(nbrJ);
    titreP->addStretch();

    QHBoxLayout * TWO_PLAYER = new QHBoxLayout();
    TWO_PLAYER -> addWidget(TwoP);

    QHBoxLayout * THREE_PLAYER = new QHBoxLayout();
    THREE_PLAYER -> addWidget(ThreeP);

    QHBoxLayout * RETURN = new QHBoxLayout();
    RETURN -> addWidget(return1);

    QVBoxLayout * MENUP = new QVBoxLayout(this);

    MENUP -> addLayout(titreP);
    MENUP -> addLayout(TWO_PLAYER);
    MENUP -> addLayout(THREE_PLAYER);
    MENUP -> addLayout(RETURN);

    setLayout(MENUP);


}


