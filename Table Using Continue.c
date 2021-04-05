#include<stdio.h>
int main()
{
	int tab,ran,i;
	scanf("%d%d",&tab,&ran);
    for(i=1;i<=ran;i++)
	{
		if (i%tab==0)
		{
			continue;
		}
		printf("%d x %d=%d\n ",tab ,i ,tab*i );
	}	
	return 0;
}
