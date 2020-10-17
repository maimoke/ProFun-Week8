#include<stdio.h>
int main()
{
	int num[2][2];
	scanf_s("%d %d %d %d",&num[0][0],&num[0][1],&num[1][0],&num[1][1]);
	printf("%d %d\n%d %d", num[0][0], num[0][1], num[1][0], num[1][1]);
	return 0;
}