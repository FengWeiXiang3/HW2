#include <stdio.h>
#include <stdlib.h>

double hou = 0;
double rat = 0;
double pay = 0;
int main(void)
{
	for (;;)
	{
		printf("�п�J�u�@�ɼơ]��J-1�H�����^�G\n");
		scanf_s("%lf", &hou);
		if (hou == -1)
		{
			break;
		}
		printf("�п�J���~�G\n");
		scanf_s("%lf", &rat);
		if (hou <= 40)
		{
			pay = hou * rat;
		}
		else
		{
			pay = 40 * rat + (hou - 40)*1.5*rat;
		}
		printf("�u�ꬰ%.2f\n\n", pay);
	}
	system("pause");
	return 0;
}