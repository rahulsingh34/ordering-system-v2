#include "A2_functions.h"
#include <stdio.h>
#include <string.h>

/*
* This function takes in the number of items in the menu, the array of menu item names, the array of each item's price, and the menu name
* The function will print each menu item and its price, dynamically formatting each row
* The function will return the index of the menu item chosen
*/
int printMenu(int itemCount, char items[][50], float prices[], char menuName[]) {
    int characters = 27;
    int choice = -1;

    printf("%s\n\n", menuName);
    for (int i = 0; i < itemCount; i++) {
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
    
    return choice;
}

/*
* This function will print the Select menu 
* The function will return the number of the menu selection chosen
*/
int selectMenu() {
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

    return menuSelection;
}

/*
This funct
*/
void printReceipt(char orderItems[][50], float orderPrices[], int orderCount, float subtotal) {
    int characters = 27;

    for (int i = 0; i < orderCount; i++){
        printf("%s", orderItems[i]);
        for (int j = 0; j < (characters - strlen(orderItems[i])); j++) {
            printf(" ");
        }
        printf("$%.2f", orderPrices[i]);
        printf("\n");
    }
}