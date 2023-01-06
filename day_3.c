//read and print elements of array
#include<stdio.h>
#define MAX_SIZE 100
int main ()
{
    int i, num ;
    int arr [MAX_SIZE];
    printf("enter the size of the array:");
    scanf("%d",&num);
    printf("enter %d elements in the array:",num);
    for (i=1; i<=num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n elements in array are:");
    for(i=1; i<=num; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;

}


