#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	float b;
	float c;
	float d;

	printf("Enter loan principal (-1 to end) :");
	scanf_s("%d", &a);

	while (a != -1)
	{
		printf("Enter interest rate:");
		scanf_s("%f", &b);
		printf("Enter term of the loan in days:");
		scanf_s("%f", &c);

		d = a*b*c/365;

		printf("The interest charge is:%f\n\n",d);
		printf("Enter loan principal (-1 to end) :");
		scanf_s("%d", &a);
	}
	system("pause");
}