#include<stdio.h>
int main()
{
	int a,b,c=0,i,d,g=0,j,k,l;
    scanf("%d",&a);
    if(a<=6||a%2!=0)
	printf("ERROR");
	else
	{
		for(i=2;i<=a/2;i++)
  {
     for(j=2;j<i;j++)
   {
   	b=i%j;
   	if(b==0)
   	{
	   c=0	;
   		break;
   	}
   	else c=1;
   }
   	for(d=a;d>=a/2;d--){
   		for(k=2;k<d;k++){
   			l=d%k;
   			if(l==0){
   				g=0;
   				break;
			   }
			   else g=1;
		   }
		   if(d+i==a&&g==1&&c==1){
           printf("%d %d\n",i,d);
		}
	   }
     }
   }
 }
