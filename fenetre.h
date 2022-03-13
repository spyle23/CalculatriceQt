#ifndef FENETRE_H
#define FENETRE_H

/*
 *creation de fenetre a partir des QWidgets
 *
*/
#include <QWidget>
#include <QPushButton>  //pour la creation des boutons
#include <QLineEdit>    //la creation des champs de texte
class Fenetre : public QWidget{
    Q_OBJECT
public:
    Fenetre();
/* prototypes de slots*/
public slots:
    void slot0();
    void slot1();
    void slot2();
    void slot3();
    void slot4();
    void slot5();
    void slot6();
    void slot7();
    void slot8();
    void slot9();

    void commaSlot();
    void additionSlot();
    void soustractionSlot();
    void produitSlot();
    void divSlot();
    void resultSlot();
    void clearSlot();

private:
    QPushButton *num0;
    QPushButton *num1;
    QPushButton *num2;
    QPushButton *num3;
    QPushButton *num4;
    QPushButton *num5;
    QPushButton *num6;
    QPushButton *num7;
    QPushButton *num8;
    QPushButton *num9;
    QPushButton *comma;
    QPushButton *addBouton;
    QPushButton *sousBouton;
    QPushButton *prodBouton;
    QPushButton *divBouton;
    QPushButton *clearBouton;
    QPushButton *resultBouton;


    QLineEdit *ecran;

    double number1;     //pour stoker les expressions sur l'ecran
    double number2;

    bool btnclick;      //une variable pour savoir si il faut ecraser l'expression sur l'ecran actuel ou le concatenner

    QString typeClick;  //le type d'operation utilisé
};

#endif // FENETRE_H
