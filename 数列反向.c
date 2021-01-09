#include<stdio.h>
int main(void)
{ int N=10, a[N],i;
  printf("Enter the 10 numbers:");
  for(i=0;i<N;i++)
  scanf("%d",&a[i]);
  for(i=N-1;i>=0;i--)
  printf("%d ",a[i]);
  printf("\n");
  return 0;
  
 } 
