#include<stdio.h>
int main()
{
	int date;
	int penalty = 300;
	int fee = 5000;
	
	printf("Enter the date of payment (1-31): ");
	scanf("%d", &date);
	
	if(date > 10)
	{
		printf("Payment is late, Penalty will be added\n");
		printf("New fee: %d", fee + penalty);
	}
	else
	{
		printf("Your payment: %d", fee);
	}
	return 0;
}
