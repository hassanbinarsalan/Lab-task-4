#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	
	if (age > 16){
		printf("Membership is allowed");
	}
	else{
		printf("Membership is not allowed");
	}
	return 0;
}
