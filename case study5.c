#include<stdio.h>
int main()
{
  int num,a[10],i=0,c=0;
	printf("enter the number to be found");
	scanf("%d",&num);
	a[0]=0,a[1]=1;
	for(i=2;i<10;i++)
	{
	   a[i]=a[i-1]+a[i-2];
   }
  for(i=0;i<10;i++)
   {
		 if(num==a[i])
		 {
		 c=1;
		}
   }
   if(c==1)
	printf("isFIBO");
	else
	printf("notFIBO");
}
