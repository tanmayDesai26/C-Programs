#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100];
    int i=0, same=0, len1=0, len2= 0;
    printf("\n Enter the first string:");
    gets(str1);
    printf("\n Enter second string:");
    gets(str2);
    len1=strlen(str1);
    len2=strlen(str2);
    if(len1==len2)
    {
        while(i<len1)
        {
            if(str1[i]==str2[i])
            {
                i++;
            }
            else break;
        }
        if(i==len1)
        {
            same=1;
            printf("\n The strings are equal");
        }
    }
    if(len1!=len2)
    {
        printf("\n The strings are not equal");
    }
    if(same==0)
    {
        if(str1[i]<str2[i])
        {
            printf("\n Str1 is greater than str2");
        }
        else
        {
            printf("\n Str2 is greater than str1");
        }
    }
    getch();
    return 0;
}