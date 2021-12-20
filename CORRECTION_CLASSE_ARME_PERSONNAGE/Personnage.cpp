#include "Personnage.hpp"

using namespace std;

Personnage::Personnage() : m_nom("NoName"), m_vie(100), m_mana(100)
{
}

Personnage::Personnage(string nom, string nomArme, int degatsArme) : m_nom(nom),
                  m_vie(100),
                  m_mana(100),
                  m_arme(nomArme, degatsArme)
{
}

Personnage::~Personnage()
{
}

void Personnage::recevoirDegats(int nbDegats)
{
    cout << m_nom << " subit " << nbDegats << " points de dégâts." << endl;
    m_vie -= nbDegats;

    if (m_vie < 0)
    {
        m_vie = 0;
        cout << m_nom << " est mort." << endl;
    }
    cout << m_nom << " a " << m_vie << " point de vie.\n" << endl;
}

void Personnage::attaquer(Personnage &cible)
{
    cout << m_nom << " attaque " << cible.getNom() << "." << endl;
    cible.recevoirDegats(m_arme.getDegats());
}

void Personnage::boirePotionDeVie(int quantitePotion)
{
    cout << m_nom << " boit une potion de " << quantitePotion << " points de vie." << endl;
    m_vie += quantitePotion;

    if (m_vie > 100)
    {
        m_vie = 100;
    }
    cout << m_nom << " a " << m_vie << " point de vie.\n" << endl;
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
    cout << m_nom << " change d'arme. Nouvelle arme : " << endl;
    m_arme.changer(nomNouvelleArme, degatsNouvelleArme);
    m_arme.afficher();
    cout << endl;
}

bool Personnage::estVivant()
{
    if (m_vie > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Personnage::afficherEtat()
{
    cout << m_nom << " infos : " << endl;
    cout << "Vie : " << m_vie << endl;
    cout << "Mana : " << m_mana << endl;
    m_arme.afficher();
    cout << endl;
}

std::string Personnage::getNom()
{
    return m_nom;
}

void Personnage::attaqueMagique(Personnage &cible)
{
    const int mana = 10;
    cout << m_nom << " attaque " << cible.getNom() << "." << endl;
    cible.recevoirDegats(mana);
    m_mana -= mana;
}
