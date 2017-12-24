#include <stdio.h>
int findNoFact(int num)
{
	// printf("\ncalled %d",num);
	int cntr=0,i;
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			cntr++;
		}
	}
	// printf("\ncnter is %d",cntr);
	return cntr;
}
int main()
{
	int n,i,j,tmp;
	scanf("%d",&n);
	int Arr[n];
	int Fact[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&Arr[i]);
		Fact[i]=findNoFact(Arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if (Fact[j]>Fact[j+1])
			{
				tmp = Fact[j];
				Fact[j] = Fact[j+1];
				Fact[j+1] = tmp;
				tmp = Arr[j];
				Arr[j] = Arr[j+1];
				Arr[j+1] = tmp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d  -  %d\n",Arr[i],Fact[i]);
	}

}