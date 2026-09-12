#include<stdio.h>
int main()
{
	int planselected;

	printf("Enter the number (1-3) to select your desired program: ");
	scanf("%d", &planselected);
	switch(planselected)
	{
		case 1:
			printf("Basic Plan");
			break;
			
		case 2:
			printf("Premium Plan");
			break;
			
		case 3:
			printf("VIP Plan");
			break;
			
		default:
			printf("Invalid Input! Please enter a number between 1 and 3");
	}
	return 0;
}
