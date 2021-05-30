#include <stdio.h>
#include <conio.h>

void read_arr(int arr[], int n);
int small_num(int arr[], int n);

int main()
{
    int num[10], n, smallest;
    printf("\n Enter the number of elements in array:");
    scanf("%d", &n);
    read_arr(num, n);
    smallest=small_num(num, n);
    printf("The smallest number in array is = %d", smallest);
    getch();
    return 0;
}
void read_arr(int arr[10], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\n arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
}
int small_num(int arr[10], int n)
{
    int i=0, small=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
        }
    return small; 
    }
}