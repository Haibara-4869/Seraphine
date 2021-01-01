#include<stdio.h>
int main()
{
    int a=0,b=0,c=0,i,n,t[100000];
    scanf("%d",&n);
    if(n<3)
    return 0;
    else
    for(i=0;i<n;i++){
        scanf("%d",&t[i]);
}
    for(i=0;i<n-2;i++){
    	if(t[i]<1)
    	return 0;
    	else
        if(t[i]+t[i+2]!=2*t[i+1])
        a=1;
        if(t[i]*t[i+2]!=t[i+1]*t[i+1])
        b=1;
        if(t[i+1]%t[i]!=t[i+2]%t[i+1])
        c=1;   
    }
		if(a==0||b==0||c==0)
		    printf("YES\n");
        else
            printf("NO\n");
}
