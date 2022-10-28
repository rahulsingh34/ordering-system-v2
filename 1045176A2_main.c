#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "A2_functions.h"

int main() {

    //Count variables
    int itemCount = 0;
    int menuSelection = -1;
    int itemSelection = -1;

    //Receipt variables
    char* receiptItems[] = {};
    float receiptPrices[] = {};

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
    
    printf("Welcome to SoCSBurger!\n\n");

    while (menuSelection != 5) {

        menuSelection = selectMenu(itemCount);

        while (menuSelection < 1 || menuSelection > 5) {
                printf("Invaild input, try again...\n");
                printf("Enter your choice: ");
                scanf("%d", &menuSelection);
                printf("\n");
        }
        
        if (menuSelection == 1) {
            itemSelection = printMenu(5, mainMenuItems, mainMenuPrices, menuNames[0]);
        }
        else if (menuSelection == 2) {
            printf("seclected");
        }
        else if (menuSelection == 3) {
            printf("seclected");
        }
        else if (menuSelection == 4) {
            printf("seclected");
        }
    }

    printf("\nEnjoy your SoCSBurger meal - have a nice day!\n\n");

    return 0;
}

