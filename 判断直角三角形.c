#include<stdio.h>
int main()
{
	int a,b,c,i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		if(a>=b+c||b>=a+c||c>=a+b)
		printf("No\n");
		else 
		if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
		printf("Yes\n");
		else
		printf("No\n");
	 } 
 } 
