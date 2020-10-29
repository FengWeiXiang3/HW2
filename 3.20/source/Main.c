#include <stdio.h>
#include <stdlib.h>

double hou = 0;
double rat = 0;
double pay = 0;
int main(void)
{
	for (;;)
	{
		printf("請輸入工作時數（輸入-1以結束）：\n");
		scanf_s("%lf", &hou);
		if (hou == -1)
		{
			break;
		}
		printf("請輸入時薪：\n");
		scanf_s("%lf", &rat);
		if (hou <= 40)
		{
			pay = hou * rat;
		}
		else
		{
			pay = 40 * rat + (hou - 40)*1.5*rat;
		}
		printf("工資為%.2f\n\n", pay);
	}
	system("pause");
	return 0;
}