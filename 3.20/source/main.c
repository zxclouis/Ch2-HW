#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	float b;
	float c;
	float d;

	printf("Enter # of hours worked (-1 to end) :");
	scanf_s("%d", &a);

	while (a != -1)
	{
		printf("Enter hourly rate of the worker ($00.00) :");
		scanf_s("%f", &b);
		c = a*b;
		if (a > 40)
		{
			c = 40 * b + (a - 40)*b*1.5;
		}
		printf("Salary is $%f\n\n", c);
		printf("Enter # of hours worked (-1 to end) :");
		scanf_s("%d", &a);
	}
	system("pause");
}