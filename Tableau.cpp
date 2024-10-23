//
// Created by Mathilde on 23/10/2024.
//

#include "Tableau.h"

using namespace std;

Tableau::Tableau(int tailleMax) {
    this->tailleMax = tailleMax;
    this->entree = new Entree[tailleMax];
    this->nbElements = 0;
}
Tableau::Tableau(Tableau &tableau) {
    this->tailleMax = tableau.tailleMax;
    this->nbElements = tableau.nbElements;
    this->entree = new Entree[tableau.tailleMax];
    for (int i = 0; i < this->tailleMax; i++) {
        this->entree[i] = tableau.entree[i];
    }
}
Tableau::~Tableau() {
    delete[] this->entree;
}

void Tableau::afficher() {
    for (int i = 0; i < this->tailleMax; i++) {
        cout<<i<<": ";
        this->entree[i].afficher()<<endl;
    }
}
void Tableau::ajouter(string nom, string numeroTel) {
    if (this->nbElements > this->tailleMax) {
        this->nbElements+=1;
        this->entree[this->nbElements] = Entree(nom, numeroTel);
    } else {
        cout<<"Erreur ajouter tableau plein";
    }
}
void Tableau::supprimer(string nom, string numeroTel) {
    bool boolTrouve=false;
    for (int i = 0; i < this->nbElements && !boolTrouve; i++) {
        if (this->entree[i].getNom()==nom and this->entree[i].getNumeroTel()==numeroTel) {
            boolTrouve=true;
            this->nbElements--;
            // Pour que l'entree supprimee ne soit plus afficher meme si afficher est apellee en suivant
            ajouter("","");
        }
    }
}
void Tableau::supprimer(string nom) {
    bool boolTrouve=false;
    for (int i = 0; i < this->nbElements && !boolTrouve; i++) {
        if (this->entree[i].getNom()==nom) {
            boolTrouve=true;
            this->nbElements--;
            // Pour que l'entree supprimee ne soit plus afficher meme si afficher est apellee en suivant
            ajouter("","");
        }
    }
}






