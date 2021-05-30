#include <stdio.h>
#include<conio.h>

int main()
{
    int arr[105
    ], i, n, j, flag=0;
    printf("\n Enter size of array:");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("\n arr[%d]=",i);
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                flag=1;
                printf("\n Duplicates found at %d and %d locations", i, j);
            }
        }
    }
    if(flag==0)
    {
        printf("\n No duplicates found");
    }
    return 0;
}