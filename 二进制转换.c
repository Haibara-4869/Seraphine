#include<stdio.h>
int main()
{
	int i, j, n, m = 0, a[16];
	scanf_s("%d", &n);
	while (n != 0)
	{
		i = n % 2;
		a[m++] = i;
		n = n / 2;
	}
	for (j = m-1; j >= 0; j--)
		printf("%d", a[j]);
	return 0;
}
