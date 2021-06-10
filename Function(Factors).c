#include<conio.h>
#include<stdio.h>
int i,n,Fc,res=0,num;
int factor(int num)
  {
      for(i=1;i<=n;i++)
        {
	      if(n%i==0)
           res++;
        }
           return res;
  }
   int main()
 {
   scanf("%d",&n);
   Fc=factor(num);
   printf("%d",Fc);
   return 0;
 }
 

