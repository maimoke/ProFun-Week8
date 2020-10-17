#include<stdio.h>
int main()
{
	int num[2][2];
	for (int i = 0; i <= 1; i++)
	{
		for (int j = 0; j <= 1; j++)
			scanf_s("%d", &num[i][j]);
	}
	for (int i = 0; i <= 1; i++)
	{
		for (int j = 0; j <= 1; j++)
			printf("%d ",num[i][j]);
		printf("\n");
	}
	return 0;
}