#include<stdio.h>
int main()
{
	int n,i,q,c=0;
	printf("enter n");
	scanf("%d",&n);
	while(n>0)
	{
		q=n%10;
		if(i%q==0)
		{
			c++;
		}
		n=n/10;
	}
	printf("%d",c);
}
