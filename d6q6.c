#include<stdio.h>
#include<string.h>
int main()
{
    
char str1[100];
char str2[100];
printf("Enter the Characters of string 1:\n");
gets(str1);
printf("Enter the Characters of string 2:\n");
gets(str2);
int i , j;
char t;
int n1=strlen(str1);
int n2=strlen(str2);
if(n1!=n2)
{
    printf("Strings are not anagrams");
    return 0;
}
// For sorting
for(i=0;i<n1;i++)
{
    for(j=0;j<n2;j++)
    {
        {if(str1[i]>str1[j])
      t=str1[i];
     str1[i]=str1[j];
     str1[j]=t;
        }
        {
            if(str2[i]>str2[j])
      t=str2[i];
     str2[i]=str2[j];
     str2[j]=t;
        }
    }
}
// Compare of two strings
for(i=0;i<n1;i++)
{
    if(str1[i]!=str2[i])
    {
        printf("Not an anagrams");
        return 0 ;
    }
}
printf("strings Are Anagrams");
return 0 ;

}