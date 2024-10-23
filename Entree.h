//
// Created by Mathilde on 23/10/2024.
//

#ifndef ENTREE_H
#define ENTREE_H
#include <iostream>


class Entree {
private:
    std::string nom;
    std::string numeroTel;

public:
    Entree();
    Entree(std::string nom, std::string numeroTel);
    std::string getNom();
    std::string getNumeroTel();
    void afficher();
};


#endif //ENTREE_H
