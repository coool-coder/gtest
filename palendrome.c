#include<stdio.h>
int main()
{
	int i,j,n,m;
	scanf("%d",&n);
	for(j=0;j<=n;j++)
	{
//		printf("%d\n",j);
		m=j;
		int k=0,p=0;
		while(m>0)
		{
//		printf("%d %d %d\n",j,k,p);
			p=m%10;
			k=k*10+p;
			m=m/10;

		}
	//	printf("%d\n",k);
		if(k==j)
		printf("%d\n",j);
	}
	return 0;
}
