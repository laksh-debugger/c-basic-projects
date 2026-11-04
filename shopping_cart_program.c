#include <stdio.h>
#include <string.h>

int main()
{
    // SHOPPING CART PROGRAM
    char item[50];
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("Welcome to the shopping cart program!\n");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    getchar();
    printf("Enter the price of the item:\n");
    scanf("%f", &price);

    getchar();
    printf("Enter your quantity:\n");
    scanf(" %d", &quantity);

    getchar();
    total = price * quantity;

    printf("the cost of the %s is %c%.2f\n ", item, currency, total);
    return 0;
}