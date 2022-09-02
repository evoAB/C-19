#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ip[20];
    printf("Enter ip address : ");
    gets(ip);
    int flag=0;
    char *a=strtok(ip,".");
    while (a!= NULL)
    {
        int x = atoi(a);
        if((x>=0)&&(x<=255)){}
        else
        {
            flag=1;
            break;
        }
        a=strtok(NULL,".");
    }
    if(flag==1)
        printf("Not valid");
    else
        printf("Valid");
    return 0;
}

























