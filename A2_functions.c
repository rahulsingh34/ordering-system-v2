#include "A2_functions.h"
#include <stdio.h>
#include <string.h>

/*
* TODO
* Write function comment here
*/
int printMenu(int itemCount, char items[][50], float prices[], char menuName[]) {
    int characters = 27;
    int choice = -1;

    printf("%s\n\n", menuName);
    for (int i=0; i < itemCount; i++) {
        printf("%d. ", i+1);
        printf("%s", items[i]);
        for (int j = 0; j < (characters - strlen(items[i])); j++) {
            printf(" ");
        }
        printf("%.2f", prices[i]);
        printf("\n");
    }

    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    
    while (choice < 1 || choice > itemCount)
    {
        printf("\nInvalid input, try again... \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    }

    printf("\n");

    choice = choice - 1;

    printf("%s Selected!\n\n", items[choice]);
    
    return choice; // TODO - this needs to return the index of the selected menu item.
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