#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, d,e;//ªø,¼e,
	printf("Enter the long:");
	scanf_s("%d", &c);
	printf("Enter the width:");
	scanf_s("%d", &d);

	
	for (b = 1; b <= d;b++)
	{
		printf("+");
		
	}
	printf("\n");
	for ( a= 3; a <= c; a++)
	{
		printf("+");
		for (b = 3; b <= d; b++)
		{	

			printf(" ");
		}
		
		printf("+\n");

	}

	for (b = d; b > 0; b--)
	{
		printf("+");
	}
	printf("\n");
	system("pause");
	return 0;
}