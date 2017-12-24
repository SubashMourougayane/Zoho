#include <stdio.h>
//IP : this is a sentence
//OP : this a enc
int main()
{
	/* subash */
	unsigned char mystr[]="this is a sentence";
	// scanf("%s",mystr);
	int always,aswish,index,len,i,in,out;
	for (len = 0;mystr[len];len++);
	for (out=0;mystr[out];out++)
	{
		for(in=out+1;mystr[in];in++)
		{
			if (mystr[in]==mystr[out]&&mystr[out]<=128)
			{
				mystr[in]+=128;
			}
		}
	}
	for(always=aswish=0;mystr[always];always++)
	{
		if (mystr[always]>=128)
		{
			continue;
		}
		mystr[aswish++]=mystr[always];
	}
	mystr[aswish]=NULL;

	printf("\n\n%s",mystr);


	return 0;
}