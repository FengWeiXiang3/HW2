#include <stdio.h>
#include <stdlib.h>

double sal = 0;
double ear = 0;
int main(void)
{
	for (;;)
	{
		printf("請輸入銷售額（新臺幣）（輸入-1以結束）：\n");
		scanf_s("%lf", &sal);
		if (sal == -1)
		{
			break;
		}
		ear = 0.09*sal + 200;
		printf("收入：%.2f\n\n", ear);
	}
	system("pause");
	return 0;
}