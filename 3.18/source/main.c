#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a;
	float b;
	printf("Enter sales in dollars (-1 to end) :");
	scanf_s("%f", &a);

	while (a != -1)
	{
		
		b = (a*0.09) + 200;
		printf("Salary is:%f", b);
		printf("\n\nEnter sales in dollars (-1 to end) :");
		scanf_s("%f", &a);

	}
	system("pause");
}