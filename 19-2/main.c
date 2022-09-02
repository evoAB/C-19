#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c[10][20];
    printf("Enter 10 city names : ");
    for(int i=0;i<10;i++)
        gets(c[i]);

    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
            if(strcmp(c[i],c[j])<0)
            {
                char temp[20];
                strcpy(temp,c[i]);
                strcpy(c[i],c[j]);
                strcpy(c[j],temp);
            }
    printf("Sorted string = ");
    for(int i=0;i<10;i++)
        printf("%s ",c[i]);
    return 0;
}
