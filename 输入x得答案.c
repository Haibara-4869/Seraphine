#include<stdio.h>
int main(void)
{int x,answer;
for (; ;){ 
if (x!=0){
printf("Enter x:");
scanf("%d",&x);
answer=3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6;
printf("The answer is:%d\n",answer);}
else 
return 0;
}
} 
  
