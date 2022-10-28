#include "A2_functions.h"
#include <stdio.h>

/*
* TODO
* Write function comment here
*/
int printMenu(int itemCount, char items[][50], float prices[], char menuName[]) {
    /*
    * TODO
    * Write function body here
    */
  
    return -1; // TODO - this needs to return the index of the selected menu item.
}

/*
* TODO
* Write other functions and function comments here
*/
int selectMenu(int itemCount) {
    int menuSelection = -1;

    printf("Select Menu:\n");
    printf("1. Main Menu\n");
    printf("2. Sides Menu\n");
    printf("3. Drinks Menu\n");
    printf("4. Desserts Menu\n");
    printf("5. Checkout\n\n");
    printf("Enter your choice: ");

    scanf("%d", &menuSelection);
    printf("\n");

    if(itemCount == 10) {
        printf("You have reached the maximum of 10 items. Please checkout.\n\n");
        return -1;
    }
    else {
        return menuSelection;
    }
}