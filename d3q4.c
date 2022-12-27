#include<stdio.h>
int main()  
{  
    int num ,i;  
    float sum, fact,x;  

    printf("enter the value of x\n");
    scanf("%f",&x);
    printf("Enter the number of terms\n");  
    scanf("%d", &num);  
    
    sum=1; fact=1;
     for(i=1;i<num;i++)
     { 
        fact= fact*x/i;
        sum =sum+fact;

     }
     printf("The sum of the series is : %f",sum);
  
    return 0;  
}  