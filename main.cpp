/*Nom: ANDRIATIANA
 * Prenom: Jean-Marie
 * L3 MISA
 * sampingyen.lee@gmail.com
 *vous retrouverez ce projet ici  https://github.com/spyle23/CalculatriceByJean.git
*/


/*-----------------------------------------CALCULATRICE BY JEAN ------------------------------*/
#include "fenetre.h"

#include <QApplication>

int main(int argc, char* argv []){
    QApplication app(argc, argv);   //creation des applications sous Qt
    Fenetre fenetre;                //instancier la classe Fenetre personnalisée heritant de QWidget

    fenetre.show();                 //afficher notre fenetre


    return app.exec();
}
