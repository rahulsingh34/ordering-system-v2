#include "A2_functions.h"
#include <stdio.h>
#include <string.h>

/*
* This function takes in the number of items in the menu, the array of menu item names, the array of each item's price, and the menu name
* The function will print each menu item and its price, dynamically formatting each row
* The function will return the index of the menu item chosen by the user
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
* This function takes the array of ordered items, an array of their prices, the number of items and the subtotal
* It will dynamically size and print the receipt based on the items
* It calls the computeSubtotal function to calculate subtotal, taxes and the total
* It will return nothing
*/
void printReceipt(char orderItems[][50], float orderPrices[], int orderCount, float subtotal) {
    int characters = 27;

    printf("Thank you for your order! Here is your receipt:\n\n");
    printf("Items:\n");

    for (int i = 0; i < orderCount; i++){
        printf("%s", orderItems[i]);
        for (int j = 0; j < (characters - strlen(orderItems[i])); j++) {
            printf(" ");
        }
        printf("$%.2f", orderPrices[i]);
        printf("\n");
    }

    printf("\nSub-total:                 ");
    printf("$%.2f\n", computeSubtotal(orderPrices, orderCount));
    printf("Tax:                       ");
    printf("$%.2f\n", 0.13 * computeSubtotal(orderPrices, orderCount));
    printf("Total:                     ");
    printf("$%.2f\n", 1.13 * computeSubtotal(orderPrices, orderCount));
}

/*
* This function will take in the array of order prices and the number of orders
* It will return the final subtotal of all ordered items
*/
float computeSubtotal(float orderPrices[], int orderCount) {
    float subtotal = 0.00;

    for (int i = 0; i < orderCount; i++) {
        subtotal += orderPrices[i];
    }

    return subtotal;
}