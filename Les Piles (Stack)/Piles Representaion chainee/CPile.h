//
// Created by Adamo08 on 05/05/2024.
//


#ifndef PILES_REPRESENTAION_CHAINEE_CPILE_H

// Définition du type Pile (implémentée par pointeurs)

typedef int Element;

typedef struct cellule {
    Element valeur;
    struct cellule *suivant;
} Cellule;

typedef Cellule *Pile;

// Déclaration des fonctions gérant la pile
Pile pile_vide ();
Pile empiler ( Pile p, Element e );
Pile depiler ( Pile p );
Element sommet ( Pile p );
int est_vide ( Pile p );


#define PILES_REPRESENTAION_CHAINEE_CPILE_H

#endif //PILES_REPRESENTAION_CHAINEE_CPILE_H
