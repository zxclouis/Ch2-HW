#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b, c, d, e;
	a = 9;
	for (b = 1; b <= 5; b++)
	{
		for (d = 5 - b; 0 < d; d--)
		{
			printf(" ");
		}
		for (e = 1; e <= 2*b-1; e++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (b = 5; 1 <= b; b--)
	{
		for (d = 5 - b; 0 < d; d--)
		{
			printf(" ");
		}
		for (e = 1; e <= 2*b-1; e++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}