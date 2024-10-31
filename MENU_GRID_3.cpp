#include "menu_grid_3.h"
#include "qobjectdefs.h"
#include <QMainWindow>
#include <QWidget>
#include <QComboBox>
#include <QPushButton>
#include <QLabel>
#include <QDoubleValidator>
#include <QVBoxLayout>
#include <QHBoxLayout>

MENU_GRID_3::MENU_GRID_3(QWidget *parent) : QWidget(parent) {
}

void MENU_GRID_3:: tab3P(){

    tailletab = new QLabel ("SELECT GRID SIZE", this);
    TAB1 = new QPushButton (" 8x8 GRID", this);
    TAB2 = new QPushButton ("12x12 GRID", this);
    Quit1 = new QPushButton ( " QUIT " , this);

    connect(Quit1, SIGNAL(clicked()), this, SLOT(close()));



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

    QVBoxLayout * MENUG3P = new QVBoxLayout(this);
    MENUG3P -> addLayout(titre);
    MENUG3P -> addLayout(t1);
    MENUG3P -> addLayout(t2);
    MENUG3P -> addLayout(QUIT);


    setLayout(MENUG3P);


}

