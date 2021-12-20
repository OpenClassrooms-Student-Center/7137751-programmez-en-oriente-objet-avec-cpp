#include <iostream>
#include <string>
#include "Personnage.hpp"

using namespace std;

int main()
{
    // Création des personnages
    Personnage david("David", "Aiguille", 25),
               goliath("Goliath", "Epée aiguisée", 20),
               mathieu("Mathieu", "Crocobur", 50);

    // Au combat !
    goliath.attaquer(david);
    david.boirePotionDeVie(20);
    goliath.attaquer(david);
    david.attaquer(goliath);
    goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40);
    goliath.attaquer(david);

    // Temps mort ! Voyons voir la vie de chacun...
    david.afficherEtat();
    goliath.afficherEtat();
    mathieu.afficherEtat();
    
    // Au combat !
    mathieu.attaqueMagique(david);
    goliath.attaquer(mathieu);
    mathieu.attaquer(david);
    
    // Infos
    david.afficherEtat();
    goliath.afficherEtat();
    mathieu.afficherEtat();
    
    // Au combat !
    mathieu.attaquer(goliath);
    goliath.boirePotionDeVie(20);
    goliath.attaqueMagique(mathieu);
    mathieu.attaquer(goliath);
    
    // Infos
    david.afficherEtat();
    goliath.afficherEtat();
    mathieu.afficherEtat();
    
    return 0;
}
