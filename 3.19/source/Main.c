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
		printf("�п�J�U�ڥ����]��J-1�H�����^�G\n");
		scanf_s("%lf", &pri);
		if (pri == -1)
		{
			break;
		}
		printf("�п�J�U�ڧQ�v�G\n");
		scanf_s("%lf", &rat);
		printf("�п�J�U�ڴ����]�ѡ^�G\n");
		scanf_s("%lf", &ter);
		cha = (pri*rat*ter) / 365;
		printf("�Q����%.2f\n\n", cha);
	}
	system("pause");
	return 0;
}