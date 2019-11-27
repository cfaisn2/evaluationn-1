//
// Created by ericthomas on 27/11/2019.
//

#include "Classe.h"

Classe::Classe(const string &nom) : nom(nom) {}

Eleve Classe::rechercherparNom(const string &nom) const {
    for(int i=0;i<eleves.size();i++)
    {
        if (eleves[i].getNom()==nom)
        {
            return eleves[i];
        }
    }

}

Eleve Classe::rechercherparID(const int id) const {

    for(int i=0;i<eleves.size();i++)
    {
        if (eleves[i].getId()==id)
        {
            return eleves[i];
        }
    }

}

float Classe::moyenneClasse() const {
    float mclasse=0;
    for(Eleve const &e:eleves)
    {
        mclasse+=e.calculerMoyennne();
    }
    return mclasse/eleves.size();
}

void Classe::ajouterEleve(Eleve &eleve) {
    eleves.push_back(eleve);
}

void Classe::retirerEleve(const int id) {
    for(int i=0;i<eleves.size();i++)
    {
        if (eleves[i].getId()==id)
        {
            eleves.erase(eleves.begin()+i);
        }
    }

}
