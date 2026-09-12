#include<stdio.h>
int main()
{
	int bill;
	double tax = 0.1;
	double planrate = 5000;
	int months;
	
	printf("Enter Number of months: ");
	scanf("%d",&months);
	double totalbill = (months * planrate) * (1 + tax);
	printf("Your total bill is: %.2f\n", totalbill);
	return 0; 
}
