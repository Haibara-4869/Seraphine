#include<stdio.h>
int main()
{
	int i,n,a[10005];
	float b=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		b+=a[i];
	}
	b/=n;
	printf("%.2f",b);
}
