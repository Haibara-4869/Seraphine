#include<stdio.h>
int main()
{
	int a,b,t=0,c,d,i,m,n,T,j[100];
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%d %d",&m,&n);
		for(a=m;a<=n;a++){
			b=a%10;
			c=(a%100)/10;
			d=a/100;
	if(a==b*b*b+c*c*c+d*d*d){
		t=1;
		printf("%d ",a);
		}
		}
		if(t==0)
		printf("-1\n");
 }
}
