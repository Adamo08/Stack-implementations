//
// Created by Adamo on 04/05/2024.
//

#ifndef PILES_REPRESENTAION_CONTIGUE_TPILE_H
#define PILES_REPRESENTAION_CONTIGUE_TPILE_H

// Définition du type Pile (implémentée par un tableau)

#define MAX_PILE 30

typedef int Element;

typedef struct {
    Element elements[MAX_PILE];
    int sommet;
} Pile;

// Déclaration des fonctions gérant la pile

Pile pile_vide (); //  To create an Empty Pile (Stack)
Pile empiler ( Pile p, Element e ); //  To Add a New Element to the Stack (Always sommet = Head)
Pile depiler ( Pile p ); // To remove an element from the Stack (Always sommet = Head)
Element sommet ( Pile p ); // To return The Head (sommet) of the Stack
int est_vide ( Pile p ); // To check if the Stack is Empty/Not
int est_pleinne(Pile p); // To check if the stack is Full/Not

/*
                      <-- Empiler     --> Depiler
 *    Pile            |               |
                    *____*            |
     *____*         *____*          *____*
     *____*         *____*          *____*
     *____*         *____*          *____*
     *____*         *____*          *____*
*/


#endif //PILES_REPRESENTAION_CONTIGUE_TPILE_H
