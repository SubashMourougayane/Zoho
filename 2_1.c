#include <stdio.h>
int main()
{
	int n,tmp,i,j,flag=0;
	scanf("%d",&n);
	int A[n];
	if (n%2==1)
	{
		flag = 1;
	}
	for ( i = 0; i < n; i++)
	{
		scanf("%d",&A[i]);
	}
	for ( i = 0; i < n-1; i++)
	{
		for ( j = 0; j < n-i-1; j++)
		{
			if (A[j]<A[j+1])
			{
				tmp = A[j];
				A[j] = A[j+1];
				A[j+1] = tmp;
			}
		}
	}
	// for (i = 0; i < n; ++i)
	// {
	// 	printf("%d ",A[i]);
	// }
	i=0;
	j=n-1;
	while(n/2>0)
	{
		printf("%d %d ",A[i++],A[j--]);
		n=n-2;
	}
	if (flag)
	{
		printf("%d",A[i]);
	}


}