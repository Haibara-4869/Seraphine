/*
  ����һ�� n�������͹����Σ������κ������Խ��߶����ύ��һ�㡣�����n�����жԽ��߽���ĸ����� 
  �����ʽ������ֻ��һ��һ������ n�����������
  �����ʽ�����һ��һ����������𰸡�
  */ 
#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long n,ans;
    scanf("%lld",&n);
    ans=n * (n-1) / 2 * (n-2) / 3 * (n-3) / 4;
    printf("%lld\n",ans);
    return 0;
 } 
