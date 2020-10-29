#include <stdio.h>
#include <stdlib.h>

double FV = 0;
int main(void)
{
	for (double i = 0.1; i < 0.125; i += 0.005)
	{
		FV = 5000;
		for (int n = 0; n <= 14; n++)
		{
			FV *= 1 + i;
		}
		printf("%.1f%s§Q²v¡G\n", i * 100, "%");
		printf("%.2f¤¸\n", FV);
	}
	system("pause");
	return 0;
}