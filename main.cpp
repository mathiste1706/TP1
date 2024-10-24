#include <iostream>
#include "Entree.h"
#include "Tableau.h"
using namespace std; 

int main() {
    
    Entree entree1("nom1", "11111");
    entree1.afficher();

    Tableau tabTailleDef(10); // Apelle constructeur par defaut de Tableau
    cout<< "tailleMax: "<<tabTailleDef.getTailleMax()<<endl;
    cout<< "nbElements: "<<tabTailleDef.getNbElements()<<endl;

    Tableau tab1(4);
    tab1.ajouter("nom2", "2222");
    cout<< "nbElements: "<<tab1.getNbElements()<<endl;
    cout<< "tab1\n";
    tab1.afficher();

    Tableau tabCopie(tab1);
    cout<< "tabCopie ajout entree\n";
    tabCopie.afficher();
    tabCopie.ajouter("nom_copie", "copppp");

    tab1.ajouter("nom3","3333");

    cout<< "check tab1 après ajout entree\n";
    tab1.afficher();
    
    cout<<"tabCopie près ajout entree ds tab1\n";
    tabCopie.afficher();

    tabCopie.supprimer("nom2", "2222");

    cout<< "tabCopie après suppression de entre2\n";
    tabCopie.afficher();

    cout<< "tab1 après suppression de entre2 ds tabCopie\n";
    tab1.afficher();

    tabCopie.ajouter("nom2", "2222");
    tabCopie.ajouter("nom3","3333");
    tabCopie.ajouter("nom3","4444");
    tabCopie.ajouter("nomM","MMMM");

    cout<<"tab Copie après ajout 2 et 3 et 4\n";
    tabCopie.afficher();

    cout<<"tab Copie après suppression 2 et 3 et 4\n";
    tabCopie.supprimer("nom2", "2222");
    tabCopie.supprimer("nom_copie", "copppp");
    tabCopie.supprimer("nom3");
    tabCopie.afficher();

    cout<< "Seg Fault Attendue\n";
    tabCopie.~Tableau();
    tabCopie.afficher();

    // question 5 on doit remplacer Tableau tableau par Tableau *tableau et faire soit des new pour les allocations de tableau ou tableau=Tableau(tailleMax);



    return 0;
}
