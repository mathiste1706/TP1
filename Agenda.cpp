#ifndef AGENDA_HPP
#define AGENDA_HPP

#include "Agenda.hpp"

using namespace std;

Agenda:: Agenda(int tailleMax){
    this->tableau=Tableau(tailleMax);
    //*tableau=Tableau(tailleMax);
    //this->tableau=new Tableau(tailleMax);
}

Agenda:: Agenda(Agenda &agenda){
    this->tableau=this->tableau;
}

void Agenda:: ajouter(std:: string nom, std:: string numeroTel){
    this->tableau.ajouter(nom, numeroTel);
}
void Agenda:: supprimer(std:: string nom, std:: string numeroTel){
    this->tableau.supprimer(nom, numeroTel);
}
void Agenda:: supprimer (std:: string nom){
    this->tableau.supprimer(nom);
}
void Agenda:: afficher(){
    this->tableau.afficher();
}

Agenda Agenda:: concat (Agenda &agenda1, Agenda &agenda2){
    
    int tailleMax=agenda1.tableau.getTailleMax()+agenda2.tableau.getTailleMax();
    
    Agenda agenda3(tailleMax);
    Entree entree;
    for (int i=0; i<agenda1.tableau.getTailleMax();i++){
        entree=Entree(agenda1.tableau.getEntree()[i]);
        agenda3.ajouter(entree.nom, entree.numeroTel);
    }

    for (int i=0; i<agenda2.tableau.getTailleMax();i++){
        entree=Entree(agenda1.tableau.getEntree()[i]);
        agenda3.tableau.ajouter(entree.nom, entree.numeroTel);
    }
    return agenda3;
}

void Agenda:: concat(Agenda &agenda){
    Entree entree;
    if (this->tableau.getTailleMax()+agenda.tableau.getTailleMax()<this->tableau.getTailleMax()){
        for (int i=0; i<agenda.tableau.getTailleMax();i++){
            entree=Entree(agenda.tableau.getEntree()[i]);
            this->tableau.ajouter(entree.nom, entree.numeroTel);
        }
    }
    else {
        cout<<"Erreur: Impossible de concatener!\nAgenda courant trop petit";
    }
}

#endif  //AGENDA_HPP