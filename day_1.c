//print all negative elements in an array...
#include<stdio.h>
#define MAX_SIZE 100
int main ()
{
    int Arr[MAX_SIZE] ;
    int i, num ;
    printf("enter size of the array:");
    scanf("%d", &num);
    printf("enter element in array:");
    for (i=1; i<=num; i++)
    {
        scanf("%d",&Arr[i]);
    }
    printf("\n all negative elements in array are:");
    for (i=1; i<=num; i++)
    {
        if (Arr[i]<1)
        {
            printf ("%d\t",Arr[i]);
        }
   }
   return 0 ;
}
