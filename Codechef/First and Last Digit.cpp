#include<stdio.h>
int main()
{
	int i,j,m,n;
	scanf("%d",&i);
	for(int k=0;k<i;k++)
	{
		n=0;
		scanf("%d",&n);
			m=n%10;
			if(n<10)
			printf("%d\n",n);
			else
			{
				while(n>=10)
				{
					n=n/10;
				}
				printf("%d\n",n+m);	
			}
	}
	return 0;
}
