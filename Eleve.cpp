//
// Created by ericthomas on 27/11/2019.
//

#include "Eleve.h"

Eleve::Eleve(int id, const string &nom, const string &prenom) : id(id), nom(nom), prenom(prenom) {}

const string &Eleve::getNom() const {
    return nom;
}

float Eleve::calculerMoyennne() const {
    float somme=0;
    for(Note const &n:listesnotes)
    {

        somme+=n.getValeur();
    }
    return somme/listesnotes.size();
}

void Eleve::ajouterNote(const Note &note) {
    listesnotes.push_back(note);

}

void Eleve::retirer(const int id) {
    listesnotes.erase(listesnotes.begin()+id);


}

const vector<Note> &Eleve::getListesnotes() const {
    return listesnotes;
}

int Eleve::getId() const {
    return id;
}
