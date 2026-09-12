#include <stdio.h>

int main()
 {
    int age1, age2, age3;

    printf("Enter age of applicant 1: ");
    scanf("%d", &age1);

    printf("Enter age of applicant 2: ");
    scanf("%d", &age2);

    printf("Enter age of applicant 3: ");
    scanf("%d", &age3);

    if (age1 >= 16 && age2 >= 16 && age3 >= 16) {
        printf("Group membership allowed.\n");
    } else {
        printf("Group membership denied.\n");
    }

    return 0;
}
