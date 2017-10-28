#include <stdio.h>
int main()
{
	char ch[]="PROGRAM";
	int k=6;
	for (int i = 0; i <=6; i++)
	{
		for (int j = 0; j <=6; j++)
		{
			if (i==j)
			{
				printf("%c",ch[i]);
			}
			if(i+j==6&&i!=3)
			{
				printf("%c",ch[k]);
				k--;
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
	}
}