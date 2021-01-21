//输入一个年份（大于 1582 的整数 ），判断这一年是否是闰年，如果是输出 1，否则输出 0。
#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a%100!=0&&a%4==0)
	printf("1");
	else
	if(a%100==0&&a%400==0)
	printf("1");
	else
	printf("0");
}
