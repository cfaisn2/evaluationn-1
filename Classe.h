//
// Created by ericthomas on 27/11/2019.
//

#ifndef EVALUATIONC__1_CLASSE_H
#define EVALUATIONC__1_CLASSE_H

#include <string>
#include "Eleve.h"

using namespace std;
class Classe {
private:
    string nom;
    vector<Eleve> eleves;
public:
    Classe(const string &nom) ;
    Eleve rechercherparNom(const string &nom) const;
    Eleve rechercherparID(const int id) const ;
    float moyenneClasse() const;
    void ajouterEleve(Eleve &eleve);
    void retirerEleve (int id);

};


#endif //EVALUATIONC__1_CLASSE_H
