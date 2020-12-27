#include<stdio.h>
int fact(int x,int y,int z )
{ 	if(x==1)
	return y;
	else 
	return fact(x-1,y,z)+z;
 }
int main()
{ int n,a,k;
  scanf("%d %d %d",&n,&a,&k);
 if(n<2||k>100||a<=0||k<=0||a>100||n>100)
  printf ("Wrong Number\n");
 else 
  printf("%d",fact(n,a,k));
}

