#include <stdio.h>
#include <stdlib.h>

int acc = 0;
double bal = 0;
double cha = 0;
double app = 0;
double cre = 0;
double nbal = 0;
int main(void)
{
	for (;;)
	{
		printf("請輸入帳號（輸入-1以結束）：\n");
		scanf_s("%d", &acc);
		if (acc == -1)
		{
			break;
		}
		printf("請輸入月初餘額：\n");
		scanf_s("%lf", &bal);
		printf("請輸入本月總費用：\n");
		scanf_s("%lf", &cha);
		printf("請輸入本月總申請信用：\n");
		scanf_s("%lf", &app);
		printf("請輸入信用額度：\n");
		scanf_s("%lf", &cre);
		nbal = bal + cha - app;
		if (nbal > cre)
		{
			printf("帳號：%d\n", acc);
			printf("信用額度：%.2f\n", cre);
			printf("餘額：%.2f\n", nbal);
			printf("超出信用額度。\n");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}