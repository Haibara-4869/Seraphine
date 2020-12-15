#include<stdio.h>
#include<math.h>
int main()
{
	int b=0,i,n,a[100]; 
	scanf("%d",&n);
	if (n<1||n>20)
	return 0;
	else
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
for(i=0;i<n;i++){
	if (abs(b)<abs(a[i]))
	b=a[i];
 }

	printf("%d\n",b);

}
