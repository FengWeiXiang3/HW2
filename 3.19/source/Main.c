#include <stdio.h>
#include <stdlib.h>

double pri = 0;
double rat = 0;
double ter = 0;
double cha = 0;
int main(void)
{
	for (;;)
	{
		printf("請輸入貸款本金（輸入-1以結束）：\n");
		scanf_s("%lf", &pri);
		if (pri == -1)
		{
			break;
		}
		printf("請輸入貸款利率：\n");
		scanf_s("%lf", &rat);
		printf("請輸入貸款期限（天）：\n");
		scanf_s("%lf", &ter);
		cha = (pri*rat*ter) / 365;
		printf("利息為%.2f\n\n", cha);
	}
	system("pause");
	return 0;
}