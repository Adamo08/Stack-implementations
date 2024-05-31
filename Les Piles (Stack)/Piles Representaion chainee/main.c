#include <stdio.h>
#include "Cpile.h"




int main () {

    // Initializing the stack
    Pile p = pile_vide();

    // Adding New Elements
    p = empiler(p,50);
    p = empiler(p,5);
    p = empiler(p,20);
    p = empiler(p,10);


    printf("Head : %d\n",sommet(p)); // Head : 10

    // Removing Elements
    p = depiler(p);
    p = depiler(p);
    printf("Head : %d\n", sommet(p)); // Head : 5

    return 0;
}
