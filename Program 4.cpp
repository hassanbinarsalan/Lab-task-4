#include<stdio.h>
int main()
{
	int fee = 5000;
	int months;
	printf("For how many months do you want to register: ");
	scanf("%d", &months);
	
	if(months > 5){
		printf("Your monthly fee is: %.2f", fee * 0.9);
	}
	else{
		printf("Your monthly fee is: %d", fee);
	}
	return 0;
}
