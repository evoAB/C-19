#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[5][20];
    printf("Enter 5 string : ");
    for(int i=0;i<5;i++)
        gets(c[i]);
    printf("Palindrome strings : ");
    for(int i=0;i<5;i++)
    {
        int l=0,flag=0;
        for(int j=0;c[i][j];j++)
            l++;
        for(int k=0;k<=l/2;k++)
        {
            if(c[i][k]!=c[i][l-k-1])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("%s\n",c[i]);
    }
    return 0;
}
