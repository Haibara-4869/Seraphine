/*
  题目描述
小玉到文具店里买尽量多的签字笔。已知一只签字笔的价格是 1 元 9 角，而班主任给小玉的钱是 a 元 b 角，小玉想知道，她最多能买多少只签字笔呢。

输入格式
输入只有一行两个整数，分别表示 a 和 b。

输出格式
输出一行一个整数，表示小玉最多能买多少只签字笔。
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,t=0;
	scanf("%d %d",&a,&b);
	for(c=a*10+b;c>=19;c-=19){
		t++;
	}
	printf("%d",t);
 }  
