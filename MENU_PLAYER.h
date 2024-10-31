#ifndef MENU_PLAYER_H
#define MENU_PLAYER_H
#include <QMainWindow>
#include <QWidget>
#include <QComboBox>
#include <QPushButton>
#include <QLabel>
#include <QDoubleValidator>

class MENU_PLAYER : public QWidget
{
    Q_OBJECT


public:

    explicit MENU_PLAYER(QWidget *parent = nullptr);
    void start();
    void GRID_2P();
    void GRID_3P();

private:

    QLabel * nbrJ;
    QPushButton * TwoP;
    QPushButton *ThreeP;
    QPushButton * Quit1;
    MENU_GRID_2 *menu2P;
    MENU_GRID_3 *menu3P;

};

#endif // MENU_PLAYER_H
