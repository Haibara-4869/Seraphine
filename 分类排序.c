#include<stdio.h>
int main()
{
	int a,i,k,j,m[100],n[100],t,b[100],p=0,q=0;
	int temp,remp;
	char ch[100];
	scanf("%d",&t);
	for(i=0;i<t;i++){
		for(j=0;j!='\n';j++){
			scanf("%d",&b[j]);	
					if(b[j]%2==0){
						m[p]=b[j];
						p++; 
				}
				else n[q]=b[j];
				q++;
            }
	    for(j=0;j<p-1;j++){
	    	if(m[j]>m[j+1]){
				m[j]=m[j+1];
				temp=m[j];
	    		m[j+1]=temp;
			}
			printf("%d ",m[j]); 
		}
		for(k=0;k<q-1;k++){
				if(n[k]>n[k+1]){
				n[k]=n[k+1];
				remp=n[k];
				n[k+1]=remp;
			}
			printf("%d ",n[k]);
		  }
		}
	}	 

	
