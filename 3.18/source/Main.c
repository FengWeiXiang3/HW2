#include <stdio.h>
#include <stdlib.h>

double sal = 0;
double ear = 0;
int main(void)
{
	for (;;)
	{
		printf("�п�J�P���B�]�s�O���^�]��J-1�H�����^�G\n");
		scanf_s("%lf", &sal);
		if (sal == -1)
		{
			break;
		}
		ear = 0.09*sal + 200;
		printf("���J�G%.2f\n\n", ear);
	}
	system("pause");
	return 0;
}