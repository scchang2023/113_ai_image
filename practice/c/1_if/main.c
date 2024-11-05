#include <stdio.h>
#define PRICE_OF_TEA 25
#define PRICE_OF_COFFEE 35

int main(int argc, char *argv[])
{
    int NumOfTea = 0;
    int NumOfCoffee = 0;
    int amount, totalPrice;

    printf("price of tea : %d\n", PRICE_OF_TEA);
    printf("number of tea : ");
    scanf("%d", &NumOfTea);
    printf("price of coffee : %d\n", PRICE_OF_COFFEE);
    printf("number of coffee : ");
    scanf("%d", &NumOfCoffee);

    totalPrice = NumOfTea * PRICE_OF_TEA + NumOfCoffee * PRICE_OF_COFFEE;
    amount = NumOfTea + NumOfCoffee;

    printf("Total Price : %d (original price)\n", totalPrice);
    if(amount >20)
    {
        totalPrice *= 0.85;
        printf("Total Price : %d (discount)\n", totalPrice);
    }

    return 0;
}
