#include<stdio.h>
#include <stdlib.h>

int main()
{

	char ch[]="COMPUTERS";
	int i,j,k;
	//1
	printf("\t1\n\n");
    for ( i = 0; i < 5; ++i)
    {
    	for ( j = 0; j < 5 ; ++j)
    	{
    		printf("* ");
    	}
    	printf("\n");
    }
    //2
    printf("\t2\n\n");
    for ( i = 0; i < 9; ++i)
    {
    	for ( j = 0; j < 9 ; ++j)
    	{
    		if (i+j>=9)
    		{
    			printf("*");
       		}
    		else
    		{
    			printf(" ");
    		}
    		
    	}
    	printf("\n");
    }
    //3
    printf("\t3\n\n");
        for ( i = 0; i < 9; ++i)
    {
    	for ( j = 0; j < 9 ; ++j)
    	{
    		if (i+j>=9)
    		{
    			printf("* ");
       		}
    		else
    		{
    			printf(" ");
    		}
    		
    	}
    	printf("\n");
    }
    //4
    printf("\t4\n\n");
    for ( i = 0; i < 9; ++i)
    {
    	k=0;
    	for ( j = 0; j < 9 ; ++j)
    	{
    		if (i+j>=9)
    		{
    			printf("%c ",ch[k]);
    			k++;
    		}
    		else
    		{
    			printf(" ");
    		}
    	}
    	printf("\n");
    }
     // printf("\t5\n\n");
        for ( i = 0; i < 9; ++i)
    {
    	k=0;
    	for ( j = 0; j < 9 ; ++j)
    	{
    		if (j>=i)
    		{
    			printf("%c ",ch[k]);
    			k++;
       		}
    		else
    		{
    			printf(" ");
    		}
    		
    	}
    	printf("\n");
    }
    //5
     printf("\t6\n\n");
        for ( i = 0; i < 9; ++i)
    {
    	for ( j = 0; j < 9 ; ++j)
    	{
    		if (j>=i)
    		{
    			printf("*");
       		}
    		else
    		{
    			printf(" ");
    		}
    	}
    	printf("\n");
    }
     printf("\t7\n\n");
        for ( i = 0; i < 9; ++i)
    {
    	for ( j = 0; j < 9 ; ++j)
    	{
    		if (j>=i)
    		{
    			printf("* ");
       		}
    		else
    		{
    			printf(" ");
    		}
    		
    	}
    	printf("\n");
    }
}
