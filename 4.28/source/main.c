#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a;//����H?(1�g�z,2���~�u,3��Ī��u,4�s�u)
	int b;//�g�z���g�~
	int d;//�u�@�X�p��
	int e;//�C�p�ɤu��
	int f;//���
	int g;//���~�u��
	int h;//�@��X��
	int i;//�s�u�u��
	int j;//��g�P����B
	float k;//��Ī��u�u��
	printf("�A�O����¾��:\n");
	scanf_s("%d", &a);


	switch (a)
	{
	case 1:
		printf("���g���~�ꬰ:");
		scanf_s("%d", &b);
		break;
	case 2:
		printf("���g�u�@�X�p��:");
		scanf_s("%d", &d);
		printf("\n");
		printf("���g�C�p�ɤu�ꬰ:");
		scanf_s("%d", &e);
		printf("\n");
		g = d*e;
		if (d > 40)
		{
			g = (40 * e) + ((d - 40)*e*1.5);
		}
		printf("���g���~����:%d\n", g);
		break;
	case 3:
		printf("���g�P����B:");
		scanf_s("%d", &j);
		printf("\n");
		k = 250 + (j*0.057);
		printf("���g���~����:%f\n", k);
		break;
	case 4:
		printf("���g���X�X��:");
		scanf_s("%d", &f);
		printf("\n");
		printf("���g�@��h�֤�:");
		scanf_s("%d", &h);
		printf("\n");
		i = f*h;
		printf("���g���~����:%d\n", i);
		break;
	}
	system("pause");
	return 0;

}