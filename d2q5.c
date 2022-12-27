#include<stdio.h>
void main()
{
    int i,j,c;
    char ch;
    for(i=1;i<=5;i++)
    {
        ch=70-i;
        for(j=1;j<=i;j++)
        {
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
}