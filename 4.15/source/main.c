#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	float a=5000;
	float b=0.1; 
	float c;
	float d=0.105; 
	float e;
	float f=0.110; 
	float g;
	float h=0.115; 
	float i;
	float j=0.120; 
	float k;
	int l;
	printf("Year  Amount on deposit:(1) 10.0	(2) 10.5	(3) 11.0	(4) 11.5	(5) 12.0 \n");
	for (l = 1; l <= 15; l++)
	{
		c = a*pow(1 + b, l);
		e = a*pow(1 + d, l);
		g = a*pow(1 + f, l);
		i = a*pow(1 + h, l);
		k = a*pow(1 + j, l);
		printf("%d			%.3f	%.3f	%.3f	%.3f	%.3f\n", l, c, e, g, i, k);

	}
	system("pause");
	return 0;
}