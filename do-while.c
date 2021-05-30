#include <stdio.h>
int main()
{
    int n, i=0, sum=0;
    float avg=0.0;
    printf("\n Enter value for n:");
    scanf("%d", &n);
    do
    {
        sum=sum+i;
        i=i+1;
    } while (i<=n);
    avg=(float)sum/n;
    printf("\n Sum of first %d = %d", n, sum);
    printf("\n Avg of %d=%.2f", n, avg);
    return 0;    
}