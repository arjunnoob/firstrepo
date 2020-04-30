#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,j,c=0,r=0,a=0,n[5][5];
	printf("Enter the array");
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&n[i][j]);
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			if(n[i][j]==1){
				c=j;
				a++;
				break;
		}	
		if(a>1){
			r=i;
			break;
		}
	}
	r=abs(2-r);
	c=abs(2-c);
	printf("Number of turns: %d",r+c);
}

