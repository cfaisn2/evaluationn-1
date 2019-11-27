//
// Created by ericthomas on 27/11/2019.
//

#ifndef EVALUATIONC__1_ELEVE_H
#define EVALUATIONC__1_ELEVE_H

#include <string>
#include <vector>
#include "Note.h"

using namespace std;
class Eleve {

private:
    int id;
    string nom;
    string prenom;
    vector<Note> listesnotes;
public:

    Eleve(int id, const string &nom, const string &prenom);
    float calculerMoyennne() const;

    const string &getNom() const;

    const vector<Note> &getListesnotes() const;

    int getId() const;

    void ajouterNote(const Note &note);
    void retirer(const int id);



};


#endif //EVALUATIONC__1_ELEVE_H
