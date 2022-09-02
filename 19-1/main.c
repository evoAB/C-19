#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[5][20];
    printf("Enter five strings : ");
    for(int i=0;i<5;i++)
        gets(s[i]);

    for(int i=0;i<5;i++)
    {
        int count=0;
        for(int j=0;s[i][j];j++)
        {
            if(s[i][j]=='a' || s[i][j]=='e' || s[i][j]=='i' || s[i][j]=='o' || s[i][j]=='u' || s[i][j]=='A' || s[i][j]=='E' || s[i][j]=='I' || s[i][j]=='O' || s[i][j]=='U')
                count++;
        }
        printf("%s = %d\n",s[i],count);
    }
    return 0;
}
