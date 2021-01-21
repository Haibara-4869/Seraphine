#include<stdio.h>
int main()
{
	int a,b,c,d,e,i,j,k,t=0;
	scanf("%d",&d);
	for(c=0;c<d;c++){
	scanf("%d%d",&a,&b);
	for(e=a;e<=b;e++){
		i=e%10;
		j=e/10%10;
		k=e/100%10;
		if(e==i*i*i+j*j*j+k*k*k){
		printf("%d ",e);
		t=1;}
	}
	if(t==1)
		printf("\n");
	if(t==0)
	printf("-1\n");
	}
	
 } 
