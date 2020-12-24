#include <stdio.h>
int main()
{
	int k,i,j,n;
	scanf("%d",&k);
	for(j=0;j<k;j++){
	scanf("%d",&n);
	for(i=2; i<=n; i++){
		while(n!=i){
			if(n%i==0){
				printf("%d*",i);
				n=n/i;
			}else
				break;
		}
	}
	printf("%d\n",n);
}
	return 0;
}
