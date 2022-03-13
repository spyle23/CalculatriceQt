#include "fenetre.h"

#include <QMessageBox>  //pour afficher des messages d'erreurs
/*-----------------------implémentation du constructeur (création de la fenetre)----------------------*/

Fenetre::Fenetre():QWidget(){
    this->setFixedSize(300,350);       //fixer la taille de la fenetre en 300 x 350


    /* creation, redimentionement et positionnement des boutons */
    num0 = new QPushButton("0",this);       //indiquer à chaque fois le parent (this fait reference à l'instance present de Fenetre)
    num0->setGeometry(0,280,50,50);
    num1 = new QPushButton("1",this);
    num1->setGeometry(0,210,50,50);
    num2 = new QPushButton("2",this);
    num2->setGeometry(60,210,50,50);
    num3 = new QPushButton("3",this);
    num3->setGeometry(120,210,50,50);
    num4 = new QPushButton("4",this);
    num4->setGeometry(0,140,50,50);
    num5 = new QPushButton("5",this);
    num5->setGeometry(60,140,50,50);
    num6 = new QPushButton("6",this);
    num6->setGeometry(120,140,50,50);
    num7 = new QPushButton("7",this);
    num7->setGeometry(0,70,50,50);
    num8 = new QPushButton("8",this);
    num8->setGeometry(60,70,50,50);
    num9 = new QPushButton("9",this);
    num9->setGeometry(120,70,50,50);
    comma = new QPushButton(".",this);
    comma->setGeometry(60,280,100,50);
    addBouton = new QPushButton("+",this);
    addBouton->setGeometry(180,70,50,50);
    sousBouton = new QPushButton("-",this);
    sousBouton->setGeometry(240,70,50,50);
    prodBouton = new QPushButton("x",this);
    prodBouton->setGeometry(180,140,50,50);
    divBouton = new QPushButton("/",this);
    divBouton->setGeometry(240,140,50,50);
    clearBouton = new QPushButton("reset",this);
    clearBouton->setGeometry(180,210,100,50);
    resultBouton = new QPushButton("=",this);
    resultBouton->setGeometry(180,280,100,50);

    /*creation et redimentionnement de la zone de text */
    ecran = new QLineEdit(this);
    ecran->setAlignment(Qt::AlignRight);        //on met le curseur à droite de l'ecran
    ecran->setGeometry(20,0,250,50);

    /*écouter les signals et executer une action slot en fonction de cela */
    QObject::connect(num0,SIGNAL(clicked()),this,SLOT(slot0()));
    QObject::connect(num1,SIGNAL(clicked()),this,SLOT(slot1()));
    QObject::connect(num2,SIGNAL(clicked()),this,SLOT(slot2()));
    QObject::connect(num3,SIGNAL(clicked()),this,SLOT(slot3()));
    QObject::connect(num4,SIGNAL(clicked()),this,SLOT(slot4()));
    QObject::connect(num5,SIGNAL(clicked()),this,SLOT(slot5()));
    QObject::connect(num6,SIGNAL(clicked()),this,SLOT(slot6()));
    QObject::connect(num7,SIGNAL(clicked()),this,SLOT(slot7()));
    QObject::connect(num8,SIGNAL(clicked()),this,SLOT(slot8()));
    QObject::connect(num9,SIGNAL(clicked()),this,SLOT(slot9()));
    QObject::connect(comma,SIGNAL(clicked()),this,SLOT(commaSlot()));
    QObject::connect(addBouton,SIGNAL(clicked()),this,SLOT(additionSlot()));
    QObject::connect(sousBouton,SIGNAL(clicked()),this,SLOT(soustractionSlot()));
    QObject::connect(prodBouton,SIGNAL(clicked()),this,SLOT(produitSlot()));
    QObject::connect(divBouton,SIGNAL(clicked()),this,SLOT(divSlot()));
    QObject::connect(clearBouton,SIGNAL(clicked()),this,SLOT(clearSlot()));
    QObject::connect(resultBouton,SIGNAL(clicked()),this,SLOT(resultSlot()));


    /* initialisation des attributs */
    number1=0;
    number2 = 0;

    typeClick = " ";
    btnclick = false;
}

void Fenetre::slot0(){
    if(btnclick){       //verification si on veut ecraser ou non l'expression courante
        ecran->setText("0");
        btnclick = false;   //on le met à false pour eviter d'ecraser tous le contenu à chaque fois
    }
    else
        ecran->setText(ecran->text() + "0");
}
void Fenetre::slot1(){
    if(btnclick){
        ecran->setText("1");
        btnclick = false;
    }
    else
        ecran->setText(ecran->text() + "1");
}
void Fenetre::slot2(){
    if(btnclick){
        ecran->setText("2");
        btnclick = false;
    }
    else
        ecran->setText(ecran->text() + "2");
}
void Fenetre::slot3(){
    if(btnclick){
        ecran->setText("3");
        btnclick = false;
    }
    else
        ecran->setText(ecran->text() + "3");
}
void Fenetre::slot4(){
    if(btnclick){
        ecran->setText("4");
        btnclick = false;
    }
    else
        ecran->setText(ecran->text() + "4");
}
void Fenetre::slot5(){
    if(btnclick){
        ecran->setText("5");
        btnclick = false;
    }
    else
        ecran->setText(ecran->text() + "5");
}
void Fenetre::slot6(){
    if(btnclick){
        ecran->setText("6");
        btnclick = false;
    }
    else
        ecran->setText(ecran->text() + "6");
}
void Fenetre::slot7(){
    if(btnclick){
        ecran->setText("7");
        btnclick = false;
    }
    else
        ecran->setText(ecran->text() + "7");
}
void Fenetre::slot8(){
    if(btnclick){
        ecran->setText("8");
        btnclick = false;
    }
    else
        ecran->setText(ecran->text() + "8");
}
void Fenetre::slot9(){
    if(btnclick){
        ecran->setText("9");
        btnclick = false;
    }
    else
        ecran->setText(ecran->text() + "9");
}
void Fenetre::commaSlot(){
    QString chaine = ".";

    for (auto& test : ecran->text()) {      //on verifie si dans l'expression de l'ecran, il y a deja une virgule
        if(chaine == test){
            return;
        }
    }
    ecran->setText(ecran->text() + chaine);
}
void Fenetre::additionSlot(){
    number1 = ecran->text().toDouble();
    typeClick = "+";
    btnclick = true;
}
void Fenetre::soustractionSlot(){
    number1 = ecran->text().toDouble();
    typeClick = "-";
    btnclick = true;
}
void Fenetre::produitSlot(){
    number1 = ecran->text().toDouble();
    typeClick = "x";
    btnclick = true;
}
void Fenetre::divSlot(){
    number1 = ecran->text().toDouble();
    typeClick = "/";
    btnclick = true;
}
void Fenetre::clearSlot(){
    ecran->clear();
}
void Fenetre::resultSlot(){
    double result;
    number2 = ecran->text().toDouble();
    if(btnclick){
        ecran->setText(ecran->text());
    }
    else{
        if(typeClick =="+"){
            result = number1 + number2;
            ecran->setText(QString::number(result));
        }
        else if(typeClick == "-"){
            result = number1 - number2;
            ecran->setText(QString::number(result));
        }
        else if(typeClick == "x"){
            result = number1 * number2;
            ecran->setText(QString::number(result));
        }
        else if(typeClick =="/"){
            if(number2 > 0.0){
                result = number1 / number2;
                ecran->setText(QString::number(result));
            }
            else{
                QMessageBox::critical(this,"maths error", "le dénominateur doit être <strong> ddifferent de 0</strong>");
                return;
            }
        }
        btnclick = true;
    }
}
