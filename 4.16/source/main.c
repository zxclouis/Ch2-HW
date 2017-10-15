#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;//ªø
	int b;//¼e

	char s[2] = "*";
	char t[2] = " ";
	printf("(A)\n");
	for (a = 1; a <= 10; a++)
	{
		for (b = 1; b <= a; b++)
		{
			printf("%s", s);
		}
		printf("\n");
	}
	//=====================================
	printf("(B)\n");
	for (a = 10; 1 <= a; a--)
	{
		for (b = 1; b <= a; b++)
		{
			printf("%s", s);
		}
		printf("\n");
	}
	//=====================================
	printf("(C)\n");
	for (b = 10; 1 <= b; b--)
	{
		for (a = 10; 1 <= a; a--)
		{
			if (b >= a)
			{
				printf("%s", s);
			}
			else
			{
				printf("%s", t);
			}
		}
		printf("\n");
	}
	//=====================================
	printf("(D)\n");
	for (b = 10; 1 <=b ; b--)
	{
		for (a = 1; a <= 10; a++)
		{
			if (b >= a)
			{
				printf("%s", t);
			}
			else
			{
				printf("%s", s);
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}