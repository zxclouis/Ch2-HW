#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a;//��(side1)
	int b;//��(side2)
	int c;//����
	printf("a(��)	b(��)	c(����)\n");
	for (c = 1; c <= 500; c++)
	{
		for (a = 1; a < 500; a++)
		{
			for (b = 1; b < 500; b++)
			{
				if ( (a + b > c) & (b + c > a)&(a + c > b)&((a*a) + (b*b) == (c*c)) )
				{
					printf("%d	%d	%d\n", a, b, c);
				}
			}
		}
	}
	system("pause");
	return 0;
}