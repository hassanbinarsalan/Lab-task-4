#include <stdio.h>

int main()
{
    int rating;

    printf("Enter your rating (1-5): ");
    scanf("%d", &rating);

    if (rating >= 4) {
        printf("You earned a free protein shake voucher!\n");
    } else {
        printf("We will improve service.\n");
    }

    return 0;
}
