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
		printf("薪水代碼：%d\n", i);
		switch (i)
		{
		case 1:
			printf("請輸入週薪：\n");
			scanf_s("%lf", &sal);
			printf("週薪：%.2f\n", sal);
			break;
		case 2:
			printf("請輸入每週工作時數：\n");
			scanf_s("%lf", &hou);
			printf("請輸入時薪：\n");
			scanf_s("%lf", &wag);
			if (hou <= 40)
			{
				printf("週薪：%.2f\n", hou * wag);
			}
			else
			{
				printf("週薪：%.2f\n", 40 * wag + (hou - 40) * 1.5 * wag);
			}
			break;
		case 3:
			printf("請輸入每週總銷售額：\n");
			scanf_s("%lf", &gro);
			printf("週薪：%.2f\n", 250 + gro * 0.057);
			break;
		case 4:
			printf("請輸入每週生產量：\n");
			scanf_s("%d", &ite);
			printf("請輸入單一物品金額：\n");
			scanf_s("%lf", &mon);
			printf("週薪：%.2f\n", ite * mon);
			break;
		}
	}
	system("pause");
	return 0;
}