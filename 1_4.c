#include <stdio.h>
int main()
{
	int A[10][10];
	int rcnt=0,flag=0,colcnt=0,sum=0,lt1,lt2,br1,br2,i,j,k;
	//input
	for ( i = 1; i <=9; i++)
	{
		for ( j = 1; j <=9; j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	//checking Row 
	for ( i = 1; i <=9; i++)
	{
		for ( j = 1; j <=9; j++)
		{
			sum+=A[i][j];
		}
		if (sum==45) /* 45 = n*(n+1)/2   n=9*/    
		{
			rcnt++;
		}
		sum=0;
	}
	//checking Column
	for ( i = 1; i <=9; i++)
	{
		for ( j = 1; j <=9; j++)
		{
			sum+=A[j][i];
		}
		if (sum==45)// 45 = n*(n+1)/2
		{
			colcnt++;
		}
		sum=0;
	}
	//checking 3*3
	for ( i = 1; i <= 9; i++)
	{
		/* code */
		switch(i)
		{
			case 1: lt1=1;lt2=1;br1=3;br2=3;break;
			case 2: lt1=1;lt2=4;br1=3;br2=6;break;
			case 3: lt1=1;lt2=7;br1=3;br2=9;break;
			case 4: lt1=4;lt2=1;br1=6;br2=3;break;
			case 5: lt1=4;lt2=4;br1=6;br2=6;break;
			case 6: lt1=4;lt2=7;br1=6;br2=9;break;
			case 7: lt1=7;lt2=1;br1=9;br2=3;break;
			case 8: lt1=7;lt2=4;br1=9;br2=6;break;
			case 9: lt1=7;lt2=7;br1=9;br2=9;break;
		}
		for (j=lt1;j <= br1; j++)
		{
			for(k = lt2;k<=br2;k++)
			{
				sum+=A[j][k];
			}
		}
		printf("\nSUM : %d",sum);
		if (sum==45)
		{
			flag++;
		}
		sum=0;
	}
	if(rcnt==9&&colcnt==9&&flag==9)
	{
		printf("\nVALID");
	}
	else
	{
		printf("\nINVALID");
	}
	
	

}



/*  11	12	13	    14	15	16	    17	18	19
	21	22	23	    24	25	26	    27	28	29
	31	32	33	    34	35	36	    37	38	39

	41	42	43	    44	45	46	    47	48	49
	51	52	53	    54	55	56	    57	58	59
	61	62	63	    64	65	66	    67	68	69

	71	72	73	    74	75	76	    77	78	79
	81	82	83	    84	85  86	    87	88	89
	91	92	93	    94	95	96	    97	98	99  */