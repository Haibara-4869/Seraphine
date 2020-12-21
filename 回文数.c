#include<stdio.h>
int main()
{  int i,N;
scanf("%d",&N);
for(i=0;i<N;i++){
	int a, b,c = 0; 
	{
	scanf("%d", &a);
	b = a;
	while (b != 0) { 
		c = c* 10 + b % 10;    
		b= b / 10;				  
	}
	if (c == a)  
		printf("Yes\n");
	else
		printf("No\n" );
  }
 }
}
