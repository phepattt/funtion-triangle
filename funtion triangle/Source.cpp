#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
void triangle(int x)
{
	int i, j;
	for (i = 1; i <= x; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main()
{
	int x;
	scanf("%d", &x);
	triangle(x);
	return 0;
}