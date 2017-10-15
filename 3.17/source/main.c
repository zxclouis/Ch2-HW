#include <stdio.h>
#include <stdlib.h>




int main(void)
{
	int a;
	
	printf("Enter account number (-1 to end) :");
	scanf_s("%d", &a);

	while (a != -1)
	{
		
		float b;
		float c;
		float d;
		float e;

		float f;

		printf("Enter beginning balance:");
		scanf_s("%f", &b);
		printf("Enter total charges:");
		scanf_s("%f", &c);
		printf("Enter total credits:");
		scanf_s("%f", &d);
		printf("Enter credit limit:");
		scanf_s("%f", &e);

		f = (b + c) - d;

		
		if (f > e)
		{

			printf("Account:	%d", a);
			printf("\nCredit Limit:	%f", e);
			printf("\nBalance:	%f", f);
			printf("\nCredit Limit Exceeded.\n");
		}
		printf("\nEnter account number (-1 to end) :");
		scanf_s("%d", &a);
	}
	system("pause");
}