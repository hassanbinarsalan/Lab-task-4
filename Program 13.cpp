#include <stdio.h>

int main()
 {
    char payment;

    printf("Is payment completed? (Y/N): ");
    scanf(" %c", &payment);

    if (payment == 'Y' || payment == 'y') {
        printf("Membership confirmed.\n");
    } else {
        printf("Membership status: Pending.\n");
    }

    return 0;
}
