#include<stdio.h>
#define N 3
int main()
{
	int a[N][N], i, j, b, c;
	int diagsum1(int a[N][N]);
	int diagsum2(int b[N][N]);
	for (i =0; i < N; i++)
	{
		printf("�������%d������\n", i+1);
		for (j = 0; j < N; j++)
			scanf_s("%d", &a[i][j]);
	}
	b = diagsum1(a);
	c = diagsum2(a);
	printf("���Խ��ߺ�Ϊ��%d\n", b);
	printf("б�Խ��ߺ�Ϊ��%d\n", c);
} 
int diagsum1(int a[][N])
{
	int y = 0, i, j;
	for (i = 0; i < N; i++)
	{
		j = i;
		y = y + a[i][j];
	}
	return(y);
}
int diagsum2(int b[][N])
{
	int y = 0, i, j;
	for (i = 0; i < N; i++)
	{
		j = N - i-1;
		y = y + b[i][j];
	}
	return(y);
}
