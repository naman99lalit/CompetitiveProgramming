#include<stdio.h>
int main()
{
	int i,j,a,k,l;
	scanf("%d",&i);
	for(int j=0;j<i;j++)
	{
		scanf("%d%d",&l,&k);
		a=l%k;
		printf("%d\n",a);
	}
	return 0;
}
