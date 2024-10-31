#include "menu_grid_2.h"
#include "play_2p_12.h"
#include "play_2p_8.h"
#include "qobjectdefs.h"
#include <QMainWindow>
#include <QWidget>
#include <QComboBox>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>

MENU_GRID_2::MENU_GRID_2(QWidget *parent) : QWidget(parent) {
}

void MENU_GRID_2:: tab2P(){

    tailletab = new QLabel ("SELECT GRID SIZE", this);
    TAB1 = new QPushButton (" 8x8 GRID", this);
    TAB2 = new QPushButton ("12x12 GRID", this);
    Quit1 = new QPushButton ( " QUIT " , this);

    connect(Quit1, SIGNAL(clicked()), this, SLOT(close()));
    connect(TAB1, SIGNAL(clicked()), this, SLOT(GRID_8()));
    connect(TAB2, SIGNAL(clicked()), this, SLOT(GRID_12()));

    QHBoxLayout * titre = new QHBoxLayout();
    titre -> addStretch();
    titre -> addWidget(tailletab);
    titre -> addStretch();

    QHBoxLayout * t1 = new QHBoxLayout();
    t1 -> addWidget(TAB1);

    QHBoxLayout * t2 = new QHBoxLayout();
    t2 -> addWidget(TAB2);

    QHBoxLayout * QUIT = new QHBoxLayout();
    QUIT -> addWidget(Quit1);


    QVBoxLayout * MENUG2P = new QVBoxLayout(this);
    MENUG2P -> addLayout(titre);
    MENUG2P -> addLayout(t1);
    MENUG2P -> addLayout(t2);
    MENUG2P -> addLayout(QUIT);


    setLayout(MENUG2P);


}

void MENU_GRID_2:: GRID_8(){

    P2_8 = new PLAY_2P_8;
    P2_8 -> show();
    P2_8 -> INTERFACE();

}

void MENU_GRID_2:: GRID_12(){

    P2_12 = new PLAY_2P_12;
    P2_12 -> show();
    P2_12 -> INTERFACE();
}




