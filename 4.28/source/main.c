#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a;//什麼人?(1經理,2時薪工,3抽傭金工,4零工)
	int b;//經理的週薪
	int d;//工作幾小時
	int e;//每小時工資
	int f;//件數
	int g;//時薪工錢
	int h;//一件幾元
	int i;//零工工錢
	int j;//當週銷售金額
	float k;//抽傭金工工錢
	printf("你是什麼職位:\n");
	scanf_s("%d", &a);


	switch (a)
	{
	case 1:
		printf("本週的薪資為:");
		scanf_s("%d", &b);
		break;
	case 2:
		printf("本週工作幾小時:");
		scanf_s("%d", &d);
		printf("\n");
		printf("本週每小時工資為:");
		scanf_s("%d", &e);
		printf("\n");
		g = d*e;
		if (d > 40)
		{
			g = (40 * e) + ((d - 40)*e*1.5);
		}
		printf("本週的薪水為:%d\n", g);
		break;
	case 3:
		printf("本週銷售金額:");
		scanf_s("%d", &j);
		printf("\n");
		k = 250 + (j*0.057);
		printf("本週的薪水為:%f\n", k);
		break;
	case 4:
		printf("本週做出幾件:");
		scanf_s("%d", &f);
		printf("\n");
		printf("本週一件多少元:");
		scanf_s("%d", &h);
		printf("\n");
		i = f*h;
		printf("本週的薪水為:%d\n", i);
		break;
	}
	system("pause");
	return 0;

}