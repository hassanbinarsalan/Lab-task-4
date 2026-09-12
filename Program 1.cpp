#include<stdio.h>
int main()
{
	int bookedslots;
	int totalslots;
	int availableslots;
	
	printf("Enter total gym slots: ");
	scanf("%d", &totalslots);
	printf("Enter booked slots: ");
	scanf("%d", &bookedslots);
	
	availableslots = totalslots - bookedslots;	 
	if(availableslots > 0){
		printf("Slots are available. \n");
		printf("Available slots are: %d\n", availableslots);
	}
	else{
		printf("No slots are available");
	}
	return 0;
}
