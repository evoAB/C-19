#include <stdio.h>
#include <stdlib.h>

int main()
{
    char usernames[5][20]={"abcabc","ramsham","santabanta","abacab","tiptoptip"},un[20];
    int n,res=1,flag=0;
    printf("Enter username : ");
    gets(un);
    for(int x=0;x<5;x++)
    {
        if(strcmp(un,usernames[x])==0)
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        printf("Enter a number : ");
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
            res*=i;
        printf("Factorial of a number : %d",res);
    }
    else
        printf("Error");

    return 0;
}
