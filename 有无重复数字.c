#include<stdio.h>
#include<stdbool.h>
int main()
{
 bool digit_seen[10]={false};
 int i,digit;
 printf("Enter the number:");
 scanf("%d",&i);
 while (i>0){
 	digit=i%10;
 	if (digit_seen[digit])
    break;
    digit_seen[digit]=true;
    i/=10;
 }
 if(i>0)
 printf("Repeated digit:\n");
 else
 printf("No repeated digit.\n");	
return 0;
}

