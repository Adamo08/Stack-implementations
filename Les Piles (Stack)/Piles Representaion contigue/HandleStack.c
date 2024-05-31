//
// Created by Adamo on 04/05/2024.
//

#include "TPile.h"
#include <stdio.h>
#include <stdlib.h>

// Function Definitions


// Initialise a new stack
Pile pile_vide() {
    Pile p;
    p.sommet = -1;
    return p;
}

// Check if the stack is empty/not
int est_vide(Pile p) {
    return p.sommet == -1;
}
int est_pleinne(Pile p){
    return p.sommet = MAX_PILE - 1;
}

// Valeur du sommet de pile (The head of the stack)
Element sommet(Pile p) {
    /*
        * pré-condition : pile non vide !
    */
    if (est_vide(p)) {
        printf("Erreur: pile vide!\n");
        exit(-1);
    }
    return (p.elements)[p.sommet];
}


// ajout d'un élément
Pile empiler(Pile p, Element e) {
    /*
        * * pré-condition : pile (stack) not full !
     */
    if (est_pleinne(p))
        {
            printf("Erreur : pile pleine!\n");
            exit(-1);
        }
    (p.sommet)++;
    (p.elements)[p.sommet] = e;
    return p;
}
// enlever un élément
Pile depiler(Pile p) {
    /*
        * pré-condition : pile non vide !
    */
    if (est_vide(p)) {
        printf("Erreur: pile vide!\n");
        exit(-1);
    }
    p.sommet--;
    return p;
}



