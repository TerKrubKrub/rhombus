#include <stdio.h>
int main()
{
	int i, j, x;
	scanf_s("%d", &x);
	for (i = 1; i <= x; i++)
	{
		for (j = 1; j <= x; j++)
		{
			if (i + j <= (x + 1) / 2 || j - i >= (x + 1) / 2 || i - j >= (x + 1) / 2 || i + j >= (x / 2) + x + 2 ) printf(" ");
				else printf("*");
			}
			printf("\n");
		}
	return 0;
}