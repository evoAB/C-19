#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[4][20];
    printf("Enter 4 words : ");
    for(int k=0;k<4;k++)
        gets(c[k]);
    printf("Enter 2 words to find in distance between them : ");
    char word1[20];
    char word2[20];
    gets(word1);
    gets(word2);
    int i,w1=-1,w2=-1,min=100,temp;
    for(i=0;i<4;i++)
    {
        if(strcmp(c[i],word1)==0)
            w1=i;
        if(strcmp(c[i],word2)==0)
            w2=i;
        if(w1!=-1 && w2 !=-1)
        {
            temp=abs(w2-w1);
            if(temp<min)
                min=temp;
        }
    }
    printf("Minimum distance : %d",min-1);
    return 0;
}
