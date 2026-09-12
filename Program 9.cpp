#include<stdio.h>
int main()
{
	int choice;
	printf("SUPPLEMENTS MENU \n");
	printf("1. Protein \n");
	printf("2. Creatine \n");
	printf("3. BCAA \n");
	printf("Enter your choice: ");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1:
			printf("You selected Protein");
			break;
			
		case 2:
			printf("You selected Creatine");
			break;
			
		case 3:
			printf("You selected BCAA");
			break;
			
		deafult:
			printf("Invalid Input");
	}
	return 0; 
	
}
