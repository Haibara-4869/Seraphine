#include<stdio.h>
#include<math.h>
#include<string.h>
#define M 10005
char s1[M],s2[M],s[M];
int a[M],b[M],c[M];
int main()
{
    int i,j,m,n,k,d,x;
    scanf("%d",&d);
	for(x=0;x<d;x++){
		scanf("%s %s",&s1,&s2);
		
        memset(c,0,sizeof(c)); 
        n=strlen(s1);
        m=strlen(s2);  //数组长度 
        k=n+m;   //保证相乘后的位数不会大于k 
        for(i=0; i<n; i++)
            a[i]=s1[n-i-1]-'0';  //字符转换成数字  用减‘0’来表示 
        for(i=0; i<m; i++)
            b[i]=s2[m-1-i]-'0';   //注意这是逆序转换成数字 
        for(i=0; i<n; i++)
            for(j=0; j<m; j++)  //双重循环 两个数各位分别相乘 
                c[i+j]+=a[i]*b[j];
        for(i=0; i<=k; i++)
        {
            if(c[i]>=10)  //进位 
            {
                c[i+1]+=c[i]/10;
                c[i]%=10;
            }
        }
        i=k;
        while(c[i]==0)
		 i--; //去除前导0 
        if(i<0) printf("0");
        else
        {
            for(; i>=0; i--)
                printf("%d",c[i]);//逆序打印c[] 
        }
        printf("\n");
    }

    return 0;
}
