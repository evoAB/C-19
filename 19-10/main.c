#include <stdio.h>
#include <stdlib.h>

int main()
{
    char usernames[5][2][20]={
                                {"abcabc","123"},
                                {"ramsham","456"},
                                {"santabanta","789"},
                                {"abacab","765"},
                                {"tiptoptip","543"}
                            };
    char un[20],pw[20];
    int flag=0;
    printf("Enter username : ");
    gets(un);
    printf("Enter password : ");
    gets(pw);
    for(int i=0;i<5;i++)
    {
        if(strcmp(usernames[i][0],un)==0 && strcmp(usernames[i][1],pw)==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Username or Password not matched");
    else
        printf("Successful login");
    return 0;
}
