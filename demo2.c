#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number\n");
	scanf("%d", &num);
	if(num>0)
	{
		printf("Positive");
	}
	if(num<0)
	{
		printf("Negative");
	}
	if(num > 0)
	{
		printf("Zero");
	}
}
