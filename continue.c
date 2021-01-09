#include <stdio.h>
int main(void)
{int n,i,sum;
n = 0;
	sum = 0;
	while (n < 10) {
	  scanf("%d", &i);
	  if (i == 0)
	    continue;
	  sum += i;
	  n++;
	  // continue jumps to here 
}
printf("%d",sum);
}

