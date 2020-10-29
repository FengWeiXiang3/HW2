#include <stdio.h>
#include <stdlib.h>

int len = 0;
int bre = 0;
int main(void)
{
	printf("請輸入長跟寬，並使用空格間隔：\n");
	scanf_s("%d%d", &len, &bre);
	for (int i = 0; i <= len - 1; i++)
	{
		for (int j = 0; j <= bre - 1; j++)
		{
			if (i == 0 || i == len - 1 || j == 0 || j == bre - 1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}