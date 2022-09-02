#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c[5][20];
    printf("Enter 5 string input : ");
    for(int i=0;i<5;i++)
        gets(c[i]);
    printf("Entered string : ");
    for(int i=0;i<5;i++)
        printf("%s ",c[i]);
    return 0;
}
