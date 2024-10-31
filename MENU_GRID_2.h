#ifndef MENU_GRID_2_H
#define MENU_GRID_2_H
#include <QMainWindow>
#include <QWidget>
#include <QComboBox>
#include <QPushButton>
#include <QLabel>
#include <QDoubleValidator>

class MENU_GRID_2 : public QWidget
{
    Q_OBJECT
public:

    explicit MENU_GRID_2(QWidget *parent = nullptr);
    void tab2P();

private:

    QLabel * tailletab;
    QPushButton * TAB1;
    QPushButton * TAB2;
};

#endif // MENU_GRID_2_H
