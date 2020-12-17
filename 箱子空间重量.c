#include<stdio.h>
#include<stdlib.h>
#define INCHES_PER_POUND 166//不需要分号 大写 
int main(void)
{int height,length,width,volume,weight;
 printf("Please enter the height of the box:");
 scanf("%d",&height);
 printf("Please enter the length of the box:");
 scanf("%d",&length);
 printf("Please enter the width of the box:");
 scanf("%d",&width);
 volume=height*length*width;
 weight=(volume+INCHES_PER_POUND-1)/INCHES_PER_POUND;
 printf("volume(cubic inches):%d\n",volume);
 printf("dimensional weight (pounds):%d\n",weight);
 system("pause");
 return 0;
 } 
