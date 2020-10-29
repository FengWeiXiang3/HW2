#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("(a)\n");
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("(b)\n");
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 9; j >= i; j--)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("(c)\n");
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			if (j < i)
			{
				printf(" ");
			}
			else
			{
				printf("%s", "*");
			}
		}
		printf("\n");
	}
	printf("(d)\n");
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 9; j >= 0; j--)
		{
			if (j > i)
			{
				printf(" ");
			}
			else
			{
				printf("%s", "*");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}