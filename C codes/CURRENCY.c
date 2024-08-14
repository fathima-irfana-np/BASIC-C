
#include <stdio.h>
#define SIZE 8

int main() 
{    
    int amount, notes;   

    // currency denominations
    int denominations[SIZE] = {500, 100, 50, 20, 10, 5, 2, 1};

    printf("Enter amount: \n");
    scanf("%d", &amount);

    printf("\n");

    for (int i = 0; i < SIZE; i++) 
    {
        notes = amount / denominations[i];

        if (notes)
        {
            amount = amount % denominations[i]; // remaining money

            printf("%5d * %5d = %5d \n", notes, denominations[i], 
                notes * denominations[i]);
        }                
    }

    return 0;
}