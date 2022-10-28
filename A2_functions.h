#ifndef A2_FUNCTIONS_H
#define A2_FUNCTIONS_H
int printMenu(int itemCount, char items[][50], float prices[], char menuName[]);
float computeSubtotal(float orderPrices[], int orderCount);
void printReceipt(char orderItems[][50], float orderPrices[], int orderCount, float subtotal);
#endif /** A2_FUNCTIONS_H */


