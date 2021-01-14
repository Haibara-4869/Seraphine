//check planet names
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define NUM_PLANETS 9
int main() 
{char *planets[]={"Mercury","Venus","Earth",
                  "Mars","Jupiter","Saturn",
				  "Uranus","Neptune","Pluto"};
int i,j;
char m[2];
for(i = 1;i < m;i++){
	printf("Enter the planets' name:\n");
	scanf("%s",&m);
	for(j = 0;j < NUM_PLANETS;j++)
	if(strcmp(m,planets[j]) == 0){
		printf("%s is planet %d\n",m, j + 1);
		break;
	
	}
if (j == NUM_PLANETS)
printf("%s is not a planet\n",m);
}
return 0; }
