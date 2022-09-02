#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[5][20],s[20];
    printf("Enter 5 strings : ");
    for(int i=0;i<5;i++)
        gets(c[i]);

    printf("Enter string to search : ");
    gets(s);

    for(int i=0;i<5;i++)
        if(strcmp(c[i],s)==0)
            printf("String found on position : %d",i+1);
    return 0;
}
