#include<stdio.h>
void main()
{
    int temp;
    printf("enter temperature in centigrades");
    scanf("%d",&temp);
    if (temp<0)
        printf("freezing water");
    else if(temp<10)
        printf("very cold water");
    else if(temp<20)
        printf("cold weather");
    else if(temp<30)
        printf("normal in temp");
    else if(temp<40)
        printf("hot");
    else
        printf("very hot");
}