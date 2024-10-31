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
}

void MENU_PLAYER:: start(){


    nbrJ = new QLabel (" SELECT NUMBERS OF PLAYERS ", this);
    TwoP = new QPushButton ("2 PLAYERS" , this);
    ThreeP = new QPushButton (" 3 PLAYERSY" , this);
    Quit1 = new QPushButton ( " QUIT " , this);
    
    connect(Quit1, SIGNAL(clicked()), this, SLOT(close()));
    connect(TwoP, SIGNAL(clicked()), this, SLOT(GRID_2P()));
    connect(ThreeP, SIGNAL(clicked()), this, SLOT(GRID_3P()));

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

void MENU_PLAYER:: GRID_2P(){
    
    MENU_GRID_2 * menu2P = new MENU_GRID_2;
    menu2P -> show();
    menu2P -> tab2P();
    
}



void MENU_PLAYER:: GRID_3P(){
    
    MENU_GRID_3 * menu3P = new MENU_GRID_3;
    menu3P -> show();
    menu3P -> tab3P();
    
}
