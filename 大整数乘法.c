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
        m=strlen(s2);  //���鳤�� 
        k=n+m;   //��֤��˺��λ���������k 
        for(i=0; i<n; i++)
            a[i]=s1[n-i-1]-'0';  //�ַ�ת��������  �ü���0������ʾ 
        for(i=0; i<m; i++)
            b[i]=s2[m-1-i]-'0';   //ע����������ת�������� 
        for(i=0; i<n; i++)
            for(j=0; j<m; j++)  //˫��ѭ�� ��������λ�ֱ���� 
                c[i+j]+=a[i]*b[j];
        for(i=0; i<=k; i++)
        {
            if(c[i]>=10)  //��λ 
            {
                c[i+1]+=c[i]/10;
                c[i]%=10;
            }
        }
        i=k;
        while(c[i]==0)
		 i--; //ȥ��ǰ��0 
        if(i<0) printf("0");
        else
        {
            for(; i>=0; i--)
                printf("%d",c[i]);//�����ӡc[] 
        }
        printf("\n");
    }

    return 0;
}
