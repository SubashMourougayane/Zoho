#include<stdio.h>
int mySqrt(int number)
{
	int sqrt;
	float i;
	if (number==1 || number==0)
	{
		return number;
	}
	for (i=0.01;i*i<number;i+=0.01);
	sqrt = (int)i;
	return sqrt;
	
}
int isPrime(int number)
{
	if (number==2||number==3||number==5) // 2,3,5
	{
		return 1;
	}
	if (!(number%2)) // all even no's
	{
		return 0;
	}
	int lol = ((6*number)+1)%6;
	if ((lol==1||lol==5)&&number>3)
	{
		int sqrt = mySqrt(number);
		for (int i = 3; i <= sqrt; i=i+2)
		{
			if (number%i==0)
			{
				return 0;
			}

		}
	}
	return 1;
}
int main()
{
	/* subash */
	int num;
	scanf("%d",&num);
	for (int i = 2; i < num; ++i)
	{
		if(isPrime(i))
		{
			printf("\n%d ",i);
		}
	}
	
	return 0;
}