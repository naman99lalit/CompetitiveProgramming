#include<stdio.h>
int main()
{
	int i,j,k,m,count=0;
	scanf("%d",&i);
	for(j=0;j<i;j++)
	{
		count=0;
		scanf("%d",&k);
		while(k!=0)
		{
		m=k%10;
		k=k/10;
		if(m==4)
		{
			count++;
		}
	    }
		printf("%d\n",count);
	}
	return 0;
}
