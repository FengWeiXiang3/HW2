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
		printf("�п�J�b���]��J-1�H�����^�G\n");
		scanf_s("%d", &acc);
		if (acc == -1)
		{
			break;
		}
		printf("�п�J���l�B�G\n");
		scanf_s("%lf", &bal);
		printf("�п�J�����`�O�ΡG\n");
		scanf_s("%lf", &cha);
		printf("�п�J�����`�ӽЫH�ΡG\n");
		scanf_s("%lf", &app);
		printf("�п�J�H���B�סG\n");
		scanf_s("%lf", &cre);
		nbal = bal + cha - app;
		if (nbal > cre)
		{
			printf("�b���G%d\n", acc);
			printf("�H���B�סG%.2f\n", cre);
			printf("�l�B�G%.2f\n", nbal);
			printf("�W�X�H���B�סC\n");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}