#include<stdio.h>
int main()
{
	int rating;
	printf("Give your Personal Trainer a rating (1-5): ");
	scanf("%d", &rating);
	switch(rating)
	{
		case 1:
			printf("Dissatisfactory");
			break;
			
		case 2:
			printf("Below Average");
			break;
			
		case 3: 
		printf("Average");
		break;
		
		case 4:
			printf("Good");
			break;
			
		case 5:
			printf("Excellent");
			break;
			
		default:
			printf("Invalid Input");
			break;
	}
	return 0;
	
}
