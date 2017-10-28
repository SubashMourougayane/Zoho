#include <stdio.h>
#include <string.h>
int main()
{
    char *ch = "welcometozohocorporation";
    char ch1[5][5];
    int k=0;
    for (int i = 0; i <5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            ch1[i][j]=ch[k];
            k++;
        }
        

    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (ch1[i][j]=='t'&&ch1[i][j+1]=='o'&&ch1[i][j+2]=='o')
            {
                printf("(%d,%d)",i,j);
                printf("(%d,%d)",i,j+2);
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (ch1[i][j]=='t'&&ch1[i+1][j]=='o'&&ch1[i+2][j]=='o')
            {
                printf("(%d,%d)",i,j);
                printf("(%d,%d)",i+2,j);
            }
        }
    }
}