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

private:

    QLabel * nbrJ;
    QPushButton * TwoP;
    QPushButton *ThreeP;
    QPushButton * return1;

};

#endif // MENU_PLAYER_H
