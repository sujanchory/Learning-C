#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
		if (y>0)
		{
			while(y!=0)
			{
				x++;
				y--;
			}
			printf("%d",x);
		}
		else if(y<0)
		{
			while(y!=0)
			{
				x--;
				y++;
			}
			printf("%d",x);
		}
		
}
