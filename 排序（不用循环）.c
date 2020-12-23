#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);  // 有n组数据
    for (i = 0; i < n; i++) {
        int a, b, c, d;
        int t;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a>b){
		  t=a;a=b;b=t;}
        if(a>c){
          t=a;a=c;c=t;}
        if(a>d){
		  t=a;a=d;d=t;}
        if(b>c){
	      t=b;b=c;c=t;}
        if(b>d){
	      t=b;b=d;d=t;}
        if(c>d){
	      t=c;c=d;d=t;}
       printf("%d %d %d %d\n",a,b,c,d);
}

        // 读入4个整数，对这4个整数排序，并输出结果

        // 请将排序代码写在这里，不能使用循环语句


   

    return 0;

}


