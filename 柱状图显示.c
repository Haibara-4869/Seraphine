#include<stdio.h>
int main()
{
	char t[21][31];
	char ch[20];
	int a[20];
	int i,j,m;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
		scanf("%c",&ch[i]);//%c指一个字符 %s指一个字符c 
	}
    int up=0,down=0;
	for(j=0;j<m;j++){
		if(a[j]>0&&up<a[j])
		up=a[j];
		else if(a[j]<0&&down>a[j])
		down=a[j];
	}
	int h=up-down+1;
	for(j=0;j<m;j++){
		t[up][j]='-';
		if(a[j]>0){
		for(i=0;i<h;i++){ 
		    	 if(i<up-a[j])
                {
                    t[i][j]=' ';
                }
            else if(i<up&&i>=up-a[j]){ 
			if(ch[j]==' '||ch[j]=='\n')
			t[i][j]='+';
			else 
			t[i][j]=ch[j]; 
		 } else if(i==up){
		 	t[i][j]='-';
		 } else
                {
                    t[i][j]=' ';
                }
			}	
		}
		else for(i=0;i<h;i++)
     {
            if(i<up){
            	t[i][j]=' ';
			}
                else  if(i==up)
                {
                    t[i][j]=='-';
                }
                else if(i>up&&i<=up-a[j])
                {
                    if(ch[j]==' '||ch[j]=='\n')
                    {
                        t[i][j]='+';
                    } else{
                        t[i][j]=ch[j];
                    }
                }
                else
                    {
                     t[i][j]=' ';
                 }
            }
        }
    for(i=0;i<h;i++)
    {
        if(i==up)
        {
            for(j=0;j<m;j++)
            {
                if(j==m-1)
                {
                    printf("%c",t[i][j]);
                }
                else
                {
                    printf("%c-",t[i][j]);
                }
            }
        }
        else
        {
            for(j=0;j<m;j++)
            {
                printf("%c ",t[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
