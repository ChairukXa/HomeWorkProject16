#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void MoreorLess(int x)
{
	if (x > 0)
	{
		printf("More Than Zero");
	}
	else
	{
		printf("Less of equal zero");
	}
}
int main()
{
	int num;
	printf("Enter Number :");
	scanf("%d", &num);
	MoreorLess(num);
	return 0;
}