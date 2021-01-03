#include<stdio.h>
int main()
{
	int n,m,i,j;
	for(n=1;n<5;n++){
		for(m=1;m<5;m++){
			for(i=1;i<5;i++){
				if(i!=m&&m!=n&&i!=n)
				j=100*n+10*m+i;
				if(j!=0)
               printf("%d ",j);			
			}
		}
	}
}
