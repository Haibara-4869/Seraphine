#include<stdio.h>
#include<string.h>
int main()
{
	int a=0,i,j,n,len;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		char ch[100];
		scanf("%s",ch);
		len=strlen(ch);
		if(ch[0]!='A'&&ch[0]!='S')
		printf("NO\n");
		 if(ch[0]=='S'){
			if(ch[1]=='C'&&ch[2]=='U'&&len==3)
			printf("YES\n");
			else
			printf("NO\n");
}
		if(ch[0]=='A'){
			int b=0;
			for(j=0;j<len;j++){
				if(ch[j]=='A')
				b+=1;
			}
			a=b/2;
		 if(ch[a]=='S'&&ch[a+1]=='C'&&ch[a+2]=='U'&&b==len-3)
			printf("YES\n");
			else 
			printf("NO\n");
		}
	}
}
