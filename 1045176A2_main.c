#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "A2_functions.h"

int selectMenu();

int main() {

    //Count variables
    int itemCount = 0;
    int menuSelection = -1;
    int itemSelection = -1;
    float subtotal = 0.00;

    //Receipt variables
    char receiptItems[10][50];
    float receiptPrices[10];

    //Menu name variables
    char* menuNames[] = {"Main Menu:", "Side Menu", "Drink Menu", "Desserts:"};

    //Main menu variables
    char mainMenuItems[5][50] = {"Cheeseburger", "Double Cheeseburger", "Hotdog", "BLT Sandwich", "Chicken Burger"};
    float mainMenuPrices[] = {10.99, 12.99, 8.99, 7.99, 7.99};

    //Side menu variables
    char sideMenuItems[3][50] = {"Fries", "Sweet Potato Fries", "Onion Rings"};
    float sideMenuPrices[] = {3.49, 3.99, 3.49};

    //Drink menu variables
    char drinkMenuItems[4][50] = {"Lemonade", "Iced Tea", "Orange Juice", "Apple Juice"};
    float drinkMenuPrices[] = {2.49, 2.99, 2.99, 2.99};

    //Dessert menu variables
    char dessertMenuItems[3][50] = {"Doughnut", "Choco Chip Cookie", "Cinnamon Roll"};
    float dessertMenuPrices[] = {2.49, 1.49, 2.99};
    
    //Welcome
    printf("Welcome to SoCSBurger!\n\n");

    //Continue to prompt selectio menu if checkout is not chosen
    while (menuSelection != 5) {

        menuSelection = selectMenu();

        //Invalid input handling 
        while (menuSelection < 1 || menuSelection > 5) {
                fflush(stdin);
                printf("Invaild input, try again...\n");
                printf("Enter your choice: ");
                scanf("%d", &menuSelection);
                printf("\n");
        }

        //Checkout prompt when item limit is reached
        while (itemCount == 10) {
            printf("You have reached the maximum of 10 items. Please checkout.\n\n");
            menuSelection = selectMenu();
            if (menuSelection == 5) {
                break;
            }
        }
        
        //Controller for the selected menus, show menu, copy selection to receipt, +1 to total items, reset
        if (menuSelection == 1) {
            itemSelection = printMenu(5, mainMenuItems, mainMenuPrices, menuNames[0]);
            strcpy(receiptItems[itemCount], mainMenuItems[itemSelection]);
            receiptPrices[itemCount] = mainMenuPrices[itemSelection];
            itemCount++;
            itemSelection = -1;
        }
        else if (menuSelection == 2) {
            itemSelection = printMenu(3, sideMenuItems, sideMenuPrices, menuNames[1]);
            strcpy(receiptItems[itemCount], sideMenuItems[itemSelection]);
            receiptPrices[itemCount] = sideMenuPrices[itemSelection];
            itemCount++;
            itemSelection = -1;
        }
        else if (menuSelection == 3) {
            itemSelection = printMenu(4, drinkMenuItems, drinkMenuPrices, menuNames[2]);
            strcpy(receiptItems[itemCount], drinkMenuItems[itemSelection]);
            receiptPrices[itemCount] = drinkMenuPrices[itemSelection];
            itemCount++;
            itemSelection = -1;
        }
        else if (menuSelection == 4) {
            itemSelection = printMenu(3, dessertMenuItems, dessertMenuPrices, menuNames[3]);
            strcpy(receiptItems[itemCount], dessertMenuItems[itemSelection]);
            receiptPrices[itemCount] = dessertMenuPrices[itemSelection];
            itemCount++;
            itemSelection = -1;
        }
    }

    //If itemCount is not 0, calculate totals and show receipt, else print goodbye 
    if (itemCount != 0) {
        printReceipt(receiptItems, receiptPrices, itemCount, subtotal);
        printf("\nEnjoy your SoCSBurger meal - have a nice day!\n\n");
    }
    else {
        printf("No selections on the menu. We are looking forward to your next visit - have a nice day!\n\n"); 
    }

    return 0;
}

/*
* This function will print the Select menu 
* The function will return the number of the menu selection chosen by the user
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
