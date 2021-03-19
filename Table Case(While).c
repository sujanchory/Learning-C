#include<stdio.h>
int main()
{
	int tab,ran,i=1,res;
	scanf("%d%d",&tab,&ran);
    while(1)
	{
		res=tab*i;
		if(res>=ran)
		{
			break; 		
		}
		printf("%d x %d=%d\n ",tab ,i ,res );
		i++;
		
	}	
	return 0;
}
