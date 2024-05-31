//
// Created by Adamo on 04/05/2024.
//

#include <stdio.h>
#include "Tpile.h"




int main () {

    // Creating an empty stack
    Pile p = pile_vide();

    // Adding 50
    p = empiler(p,50);

    /*

        *    *
        *____*
        * 50 * // Head : 50
        ******

     */

    // Adding 5
    p = empiler(p,5);

    /*
        *____*
        *  5 * // Head : 5
        *____*
        * 50 *
        ******

     */

    // Adding 20
    p = empiler(p,20);

    /*
        *____*
        * 20 *  // Head : 20
        *____*
        *  5 *
        *____*
        * 50 *
        ******

     */

    // Adding 10
    p = empiler(p,10);

    /*
        *____*
        * 10 *  // Head : 10
        *____*
        * 20 *
        *____*
        *  5 *
        *____*
        * 50 *
        ******

     */

    printf("Head : %d\n", sommet(p)); //  Head : 10

    // Removing an Element (Head)
    p = depiler(p);

    /*

        *____*
        * 20 * // Head : 20
        *____*
        *  5 *
        *____*
        * 50 *
        ******

     */

    // Removing another element
    p = depiler(p);

    /*
       *____*
       *  5 * // Head : 5
       *____*
       * 50 *
       ******

    */


    printf("Head : %d\n", sommet(p)); //  Head : 5
    return 0;
}
