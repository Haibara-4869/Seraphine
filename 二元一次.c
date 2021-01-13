//做一个二元一次方程的程序 
//a*x+b*y=c
//m*x+n*y=p 
#include <stdio.h>
#include <stdlib.h>
int main(void)
{int x,y;
 int a,b,c,m,n,p;
 printf("输入系数：");
 scanf("%d%d%d%d%d%d",&a,&b,&c,&m,&n,&p);
 x=(n*c-b*p)/(a*n-b*m);
 y=(a*p-m*c)/(n*a-m*b);
 printf("x=%d\n",x);
 printf("y=%d\n",y);
 system("pause");
 return 0;
 
 } 
