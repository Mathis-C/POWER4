#ifndef MENU_GRID_3_H
#define MENU_GRID_3_H
#include <QMainWindow>
#include <QWidget>
#include <QComboBox>
#include <QPushButton>
#include <QLabel>
#include <QDoubleValidator>

class MENU_GRID_3 : public QWidget
{
    Q_OBJECT
public:

    explicit MENU_GRID_3(QWidget *parent = nullptr);
    void tab3P();

private:

    QLabel * tailletab;
    QPushButton * TAB1;
    QPushButton * TAB2;
};

#endif // MENU_GRID_3_H
