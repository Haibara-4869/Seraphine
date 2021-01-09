#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int a,b,c=0;
		scanf("%d",&b);
		a=b;
		while(b!=0){
			c=c*10+b%10;
			b=b/10;
		}
		if(a==c){
		printf("yes\n");
	}
	else 
	printf("no\n");	
	}
}
