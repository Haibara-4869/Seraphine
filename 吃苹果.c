/*
八尾勇喜欢吃苹果。英语课上学到了 apple 这个词语，想用它来造句。
如果她吃了 1 个苹果，就输出 Today, I ate 1 apple.；如果她没有吃，那么就把 1 换成 0；
如果她吃了不止一个苹果，别忘了 apple 这个单词后面要加上代表复数的 s。你能帮她完成这个句子吗 
输入吃了的苹果数量。 
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
