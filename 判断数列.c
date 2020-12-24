#include<stdio.h>
int main()
{int a,b,c,d,e,i;
while (1)
 {
 scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
 if (a==0&&b==0&&c==0&&d==0&&e==0) 
 break;
   if(b-a==c-b&&c-b==d-c&&d-c==e-d)
  {int f=b-a;
  printf("case one\n");
  for (i=1;i<=5;i++)
  printf("%d ",e+=f);
  printf("\n");}
  if (a*c==b*b&&b*d==c*c&&e*c==d*d)
   {
   printf("case two\n");
   int g =b/a;
   for (i=1;i<=5;i++)
   printf("%d ",e*=g);
   printf("\n");}
   if (c==a+b&&d==c+b&&e==d+c){
  printf("case three\n");
  int m[10]={a,b,c,d,e};
  for (i=1;i<=5;i++)
  printf("%d ",m[4+i]=m[3+i]+m[2+i]);
  }
 }
}
