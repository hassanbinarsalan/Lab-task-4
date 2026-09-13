#include<stdio.h>
int main()
{
	int price;
	float finalprice;
	int corporate;
	printf("Enter original price: ");
	scanf("%d", &price);
	
	printf("Is the customer a corporate employee (1 for yes, 0 for no):");
	scanf("%d", &corporate);
	if (corporate == 1)
	{
		finalprice = price * 0.8;
		printf("20% corporate discount applied \n");
	}
	else
	{
		finalprice = price;
		printf("No discount applied");
	}
	printf("Final price = %.2f\n", finalprice);
	return 0;
}
