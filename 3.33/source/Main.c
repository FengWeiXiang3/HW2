#include <stdio.h>
#include <stdlib.h>

int len = 0;
int bre = 0;
int main(void)
{
	printf("�п�J����e�A�èϥΪŮ涡�j�G\n");
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