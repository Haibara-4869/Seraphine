#include<stdio.h>
#include<math.h> 
int main()
{
	int i,n,a;
	double b;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		if(a<0)
		printf("ERROR\n");
		else{
		b=sqrt(a);
		printf("%.2f\n",b);
	 }
	}
}
