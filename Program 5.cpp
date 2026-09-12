#include <stdio.h>

int main() 
{
    char choice;
    float baseFee = 50.0;
    float trainerFee = 30.0;
    float totalFee;

    printf("Do you want a personal trainer? (Y/N): ");
    scanf(" %c", &choice);

    if (choice == 'Y' || choice == 'y') {
        totalFee = baseFee + trainerFee;
        printf("Personal trainer added. Total bill: $%.2f\n", totalFee);
    } else {
        totalFee = baseFee;
        printf("No trainer added. Total bill: $%.2f\n", totalFee);
    }

    return 0;
}
