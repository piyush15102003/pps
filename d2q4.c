#include<stdio.h>
void main()
{
    int i,j,c;
    char ch;
    for(i=1;i<=4;i++)
    {
        ch=64+i;
        for(j=1;j<=i;j++)
        {
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
}