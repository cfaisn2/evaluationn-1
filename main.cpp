#include <iostream>
#include "Note.h"
#include "Eleve.h"
#include "Classe.h"

int main() {
    /*************************************création de notes**************************************/
    Note n1(10);
    Note n2(15);
    Note n3(20);
    Note n4(5);
    /************************************création des Eleves**************************************/
    Eleve e1(1,"Thomas","Andre");
    Eleve e2(2,"Didier","Tisserand");
    /************************************Attribution des Notes************************************/
    e1.ajouterNote(n1);
    e1.ajouterNote(n4);
    e1.ajouterNote(n2);
    e2.ajouterNote(n2);
    e2.ajouterNote(n3);
    /***********************************Calcul de la moyenne par élève****************************/
    cout<<e1.calculerMoyennne()<<endl;
    cout<<e2.calculerMoyennne()<<endl;
    /***********************************Retire une note*******************************************/
    e1.retirer(2);
    cout<<e1.calculerMoyennne()<<endl;
    /***********************************Création d'une classe**************************************/
    Classe c1("CM2");
    /*************************************ajouts d'éléves******************************************/
    c1.ajouterEleve(e1);
    c1.ajouterEleve(e2);
    /************************************Calcul de la moyenne de classe****************************/
    cout<<c1.moyenneClasse()<<endl;
    /************************************retire un eleve*******************************************/
    c1.retirerEleve(2);
    cout<<c1.moyenneClasse()<<endl;
    /***********************************recheche par nom********************************************/
    cout<<c1.rechercherparNom("Thomas").getNom()<<endl;
    /**********************************recherche par id**********************************************/
    cout<<c1.rechercherparID(1).getNom()<<endl;
    return 0;
}