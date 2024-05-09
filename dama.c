#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

#define S 2
#define M 3

void av_sum(int a[]);

int main(void) {
	int a[M] = { 0 }, b[M] = { 0 };
	int n = 65, i, j;

	for (i = 0; i < S; i++)
	{
		for (j = 0; j < M; j++)
		{
			printf("輸入學生%c成績%d:", 65 + i, j + 1);
			if (n == 65)
			{
				scanf("%d", &a[j]);
			}
			if (n == 66)
			{
				scanf("%d", &b[j]);
			}
		}
		n += i;
	}
	av_sum(a);
}
void av_sum(int a[]) {
	int i, sum = 0;
	for (i = 0; i < M; i++)
	{
		sum += a[i];
	}
	printf("%d\n", sum);
}