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

    //Receipt variables
    char* receiptItems[] = {};
    float receiptPrices[] = {};

    //Select menu variables
    char* menuNames[] = {"Main Menu", "Sides Menu", "Drinks Menu", "Desserts Menu", "Checkout"};

    //Main menu variables
    char* mainMenuItems[] = {"Cheeseburger", "Double Cheeseburger", "Hotdog", "BLT Sandwich", "Chicken Burger"};
    float mainMenuPrices[] = {10.99, 12,99, 8.99, 7.99, 7.99};

    //Side menu variables
    char* sideMenuItems[] = {"Fries", "Sweet Potato Fries", "Onion Rings"};
    float sideMenuPrices[] = {3.49, 3.99, 3.49};

    //Drink menu variables
    char* drinkMenuItems[] = {"Lemonade", "Iced Tea", "Orange Juice", "Apple Juice"};
    float drinkMenuPrices[] = {2.49, 2.99, 2.99, 2.99};

    //Dessert menu variables
    char* dessertMenuItems[] = {"Doughnut", "Choco Chip Cookie", "Cinnamon Roll"};
    float dessertMenuPrices[] = {2.49, 1.49, 2.99};
    
    printf("Welcome to SoCSBurger!\n\n");

    while (itemCount != - 1) {
        menuSelection = selectMenu(itemCount);
    }

    printf("\nEnjoy your SoCSBurger meal - have a nice day!\n\n");
    return 0;
}

int selectMenu(int itemCount) {
    int menuSelection = -1;

    printf("Select Menu:\n");
    printf("1. Main Menu:\n");
    printf("2. Sides Menu:\n");
    printf("3. Drinks Menu:\n");
    printf("4. Desserts Menu:\n");
    printf("5. Checkout:\n\n");
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