#include <stdio.h>
#include <stdlib.h>

double sal = 0;
double hou = 0;
double wag = 0;
double gro = 0;
int ite = 0;
double mon = 0;
int main(void)
{
	for (int i = 1; i <= 4; i++)
	{
		printf("�~���N�X�G%d\n", i);
		switch (i)
		{
		case 1:
			printf("�п�J�g�~�G\n");
			scanf_s("%lf", &sal);
			printf("�g�~�G%.2f\n", sal);
			break;
		case 2:
			printf("�п�J�C�g�u�@�ɼơG\n");
			scanf_s("%lf", &hou);
			printf("�п�J���~�G\n");
			scanf_s("%lf", &wag);
			if (hou <= 40)
			{
				printf("�g�~�G%.2f\n", hou * wag);
			}
			else
			{
				printf("�g�~�G%.2f\n", 40 * wag + (hou - 40) * 1.5 * wag);
			}
			break;
		case 3:
			printf("�п�J�C�g�`�P���B�G\n");
			scanf_s("%lf", &gro);
			printf("�g�~�G%.2f\n", 250 + gro * 0.057);
			break;
		case 4:
			printf("�п�J�C�g�Ͳ��q�G\n");
			scanf_s("%d", &ite);
			printf("�п�J��@���~���B�G\n");
			scanf_s("%lf", &mon);
			printf("�g�~�G%.2f\n", ite * mon);
			break;
		}
	}
	system("pause");
	return 0;
}