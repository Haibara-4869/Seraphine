#include<stdio.h>
#include<string.h>
int main()
{
	int len;
	char ch[100];
	gets(ch);
	len=strlen(ch);
	printf("%d",len);
}
