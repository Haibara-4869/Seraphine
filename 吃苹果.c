/*
��β��ϲ����ƻ����Ӣ�����ѧ���� apple ����������������䡣
��������� 1 ��ƻ��������� Today, I ate 1 apple.�������û�гԣ���ô�Ͱ� 1 ���� 0��
��������˲�ֹһ��ƻ���������� apple ������ʺ���Ҫ���ϴ������� s�����ܰ��������������� 
������˵�ƻ�������� 
*/
#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	if(x<2){
		printf("Today, I ate %d apple.",x);
	}
	else{
		printf("Today, I ate %d apples.",x);
	}
 } 
