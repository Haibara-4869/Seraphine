#include<stdio.h>
#include<string.h>
int main()
{
	int a,i,j,m[100],n[100],t,b[100],p=0,q=0;
	char ch[100];
	scanf("%d",&t);
	for(i=0;i<t;i++){
		for(j=0;j!='\n';j++){
			scanf("%d%c",&b[j],ch[j]);	
					if(b[j]%2==0){
						m[p]=b[j];
						p++; 
				}
				else n[q]=b[j];
				q++;
            }
	    for(a=0;a<j;a++)
        printf("%d",m[a]); 
		}	
}
	
