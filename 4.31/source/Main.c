#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for (int i = 0; i <= 8; i++)
	{
		for (int j = 0; j <= 8; j++)
		{
			if (i <= 4 && j >= 4 - i && j <= 4 + i)
			{
				printf("*");
			}
			else if (i > 4 && j >= i - 4 && j <= 12 - i)
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