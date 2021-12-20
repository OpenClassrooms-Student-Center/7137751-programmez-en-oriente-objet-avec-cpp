#include "Arme.hpp"

using namespace std;

Arme::Arme() : m_nom("Epée rouillée"), m_degats(10)
{
}

Arme::Arme(string nom, int degats) : m_nom(nom), m_degats(degats)
{
}

void Arme::changer(string nom, int degats)
{
    m_nom = nom;
    m_degats = degats;
}

void Arme::afficher()
{
    cout << "Arme : " << m_nom << " (Dégâts : " << m_degats << ")" << endl;
}

int Arme::getDegats() const
{
    return m_degats;
}
