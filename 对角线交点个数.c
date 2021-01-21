/*
  对于一个 n个顶点的凸多边形，它的任何三条对角线都不会交于一点。请求出n边形中对角线交点的个数。 
  输入格式：输入只有一行一个整数 n，代表边数。
  输出格式：输出一行一个整数代表答案。
  */ 
#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long n,ans;
    scanf("%lld",&n);
    ans=n * (n-1) / 2 * (n-2) / 3 * (n-3) / 4;
    printf("%lld\n",ans);
    return 0;
 } 
