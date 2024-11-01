#include "power4.h"
#include "qobjectdefs.h"
#include <QMainWindow>
#include <QWidget>
#include <QComboBox>
#include <QPushButton>
#include <QLabel>
#include <QDoubleValidator>
#include <QVBoxLayout>
#include <QHBoxLayout>

POWER4::POWER4(QWidget *parent)
    : QMainWindow(parent) ,menuPlayer(new MENU_PLAYER(this))
{

    TITRE = new QLabel (" POWER 4 ", this);
    DESIGN = new QLabel ("Design by MAXIMO, ANGELICA and MATHOQ", this);

    PLAY = new QPushButton ("PLAY" , this);
    HELP = new QPushButton ("HELP", this);
    QUIT = new QPushButton ( "QUIT" , this);

    connect(QUIT, SIGNAL(clicked()), this, SLOT(close()));
    connect(PLAY, SIGNAL(clicked()), this, SLOT(play()));


    QWidget *centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    QHBoxLayout * titre = new QHBoxLayout();
    titre->addStretch();
    titre->addWidget(TITRE);
    titre->addStretch();

    QHBoxLayout * play = new QHBoxLayout();
    play -> addWidget(PLAY);


    QHBoxLayout * help = new QHBoxLayout();
    help -> addWidget(HELP);

    QHBoxLayout * quit = new QHBoxLayout();
    quit -> addWidget(QUIT);


    QHBoxLayout * des = new QHBoxLayout();
    des -> addWidget(DESIGN);



    QVBoxLayout * MENU = new QVBoxLayout(this);

    MENU -> addLayout(titre);
    MENU -> addLayout(play);
    MENU -> addLayout(help);
    MENU -> addLayout(quit);
    MENU -> addLayout(des);


    centralWidget->setLayout(MENU);

}

void POWER4::play(){

    MENU_PLAYER * jeu = new MENU_PLAYER;
    jeu->show();
    jeu -> start();

}


POWER4::~POWER4() {}
