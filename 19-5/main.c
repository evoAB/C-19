#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[5][20],s[20];
    printf("Enter 5 emails : ");
    for(int i=0;i<5;i++)
        gets(c[i]);
    for(int i=0;i<5;i++)
        if(strchr(c[i],'@')==0)
            printf("%s\n",c[i]);
    return 0;
}
