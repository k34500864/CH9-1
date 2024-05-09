#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

#define S 5

void av_sum(int a[]);

int main(void) {
	int a[S] = {0}, b[S] = {0}, c[S] = {0}, d[S] = {0}, e[S] = {0};
	int n = 65, i, j;

	for (i = 0; i < S; i++)
	{
		for (j = 0; j < S; j++)
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
			if (n == 67)
			{
				scanf("%d", &c[j]);
			}
			if (n == 68)
			{
				scanf("%d", &d[j]);
			}
			if (n == 69)
			{
				scanf("%d", &e[j]);
			}
			n += i;
		}
	}
	printf("學生%s總分 : %d, 平均 : \n", 65 + i);
	av_sum(a);
}
void av_sum(int a[]) {
	int i, sum;
	for (i = 0; i < S; i++)
	{
		sum += a[i];
	}
	printf("學生%s總分 : %d, 平均 : %d\n", a);
}