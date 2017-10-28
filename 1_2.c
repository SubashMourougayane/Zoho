#include <stdio.h>
#include <math.h>
int main()
{
	int n,w,tmp;
	scanf("%d",&n);
	int A[n],B[n];
	for (int i = 0; i < n; i++)
	{
		/* code */
        w=0;
		scanf("%d",&A[i]);
		float a = sqrt(A[i]);
		int a1 = a;
		if(a-a1==0)
		{
			w+=5;
		}
		if(A[i]%4==0&&A[i]%6==0)
		{
			w+=4;
		}
		if(A[i]%2==0)
		{
			w+=3;
		}
		B[i]=w;
		printf("\n %d %d ",A[i],B[i]);

	}
	for (int i = 0; i < n; i++)
	{
		/* code */
		for (int j = 0; j < n-i-1; j++)
		{
			if (B[j]>B[j+1])
			{
				tmp = B[j];
				B[j] = B[j+1];
				B[j+1] = tmp;
				tmp = A[j];
				A[j] = A[j+1];
				A[j+1] = tmp;
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		/* code */
		printf("\n(%d,%d) ",A[i],B[i]);
	}

}