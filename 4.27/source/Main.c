#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("�ġ]�ѡ^\t�ѡ]�ġ^\t��\n");
	for (int i = 1; i < 500; i++)
	{
		for (int j = i; j < 500; j++)
		{
			for (int k = j + 1; k <= 500; k++)
			{
				if (i*i + j * j == k * k)
				{
					printf("%3d\t\t%3d\t\t%3d\n", i, j, k);
				}
			}
		}
	}
	system("pause");
	return 0;
}