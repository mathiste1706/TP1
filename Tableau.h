//
// Created by Mathilde on 23/10/2024.
//

#ifndef TABLEAU_H
#define TABLEAU_H
#include "Entree.h"


class Tableau {
private:
    int tailleMax;
    Entree* entree;
    int nbElements;

public:
    Tableau(int tailleMax);
    Tableau(Tableau& tableau);
    ~Tableau();
    Entree* getEntree();
    int getTailleMax();
    int getNbElements();
    void afficher();
    void ajouter(std::string nom, std::string numeroTel);
    void supprimer(std::string nom, std::string numeroTel);
    void supprimer(std::string nom);

};



#endif //TABLEAU_H
