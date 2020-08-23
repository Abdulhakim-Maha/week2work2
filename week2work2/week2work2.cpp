#include<stdio.h>
int main()
{
	int i, j, n, k = 65;
	printf("Enter your number(less than 8) : ");
	scanf_s("%d", &n);
	if (n < 8)
	{
		for (i = 1;i <= n;i++)
		{
			for (j = 1;j <= i;j++, k++)
			{
				printf("%c", k);

			}
			printf("\n");
		}
	}
	else
	{
		printf("Error");
	}
}