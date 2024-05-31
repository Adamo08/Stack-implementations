//
// Created by Adamo08 on 05/05/2024.
//

#include "CPile.h"
#include <stdio.h>
#include <stdlib.h>

// Creating an Empty Stack
Pile pile_vide(void) {
    return NULL;
}

// Function to check if the stack is Empty/Not
int est_vide(Pile p) {
    return (p == NULL);
}

// Returning the Head (sommet) of the srack
Element sommet(Pile p) {
    /*
        * pré-condition: pile non vide !
    */
    if (est_vide(p)) {
        printf("Erreur: pile vide !\n");
        exit(-1);
    }
    return p->valeur;
}

// Adding a new Element
Pile empiler(Pile p, Element e) {

    Cellule * pc;
    pc=(Cellule *)malloc(sizeof(Cellule));
    pc->valeur=e;
    pc->suivant=p;
    return pc;
}

// Deleting an Element
Pile depiler(Pile p) {
    /*
        * pré-condition: pile non vide !
    */
    Cellule * pc = p;
    if (est_vide(p)) {
        printf("Erreur: pile vide !\n");
        exit(-1);
    }
    p=p->suivant;
    free(pc);
    return p;
}
