//
// Created by Mathilde on 23/10/2024.
//

#include "Entree.h"

using namespace std;
Entree::Entree() {
    nom="";
    numeroTel="";
}
Entree::Entree(std::string nom, std::string numeroTel) {
    this->nom=nom;
    this->numeroTel=numeroTel;
}


string Entree::getNom() {
    return nom;
}
string Entree::getNumeroTel() {
    return numeroTel;
}
void Entree::afficher() {
    cout << nom << " " << numeroTel << endl;
}



