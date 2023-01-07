//read and print elements of array
#include<stdio.h>
//#define MAX_SIZE 100
int main ()
{
    int i, num, arr[100],sum=0;
    printf("enter the size of the array:");
    scanf("%d",&num);
    printf("enter elements in the array:",num);
    for (i=1; i<=num; i++)
    {
        scanf("%d", &arr[i]);
        {
            sum= sum+arr[i];
        }
    }
    printf("\n sum of the numbers of the array:%d", sum);

    return 0;
}

