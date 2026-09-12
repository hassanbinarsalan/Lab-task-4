#include<stdio.h>
int main()
{
	int fee = 5000;
	int dietconsultation;
	printf("Would you like to take diet consultation (1 for YES, 0 for NO): ");
	scanf("%d", &dietconsultation);
	
	if(dietconsultation == 1)
	{
		printf("Your Monthly fee will be: fee + diet consultation charges =  %d", fee + 1000);
	}
	else if(dietconsultation == 0)
	{
		printf("Your Monthly fee will be: %d", fee);
	}
	else
	{
		printf("Invalid Input");
	}
	return 0;
}

