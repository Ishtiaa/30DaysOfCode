//print the second largest element of an array...
#include<stdio.h>
#include<limits.h>

int main()
{
    int num, arr[100];
    //initialize max and second max with the minimum possible value
    int max = INT_MIN;
    int secondmax = INT_MIN;

    printf("Enter the size of the array:\n ");
    scanf("%d",&num);

    printf("Enter the elements of the array:\n ");
    for(int i=1; i<=num; i++)
    {
        scanf("%d",&arr[i]);
    }

    //Iterate through array elements
    for(int i=1; i<=num; i++)
    {
        //element is greater than max then update max with new value and secondmax with old

        if(arr[i]>max)
        {
            secondmax = max;
            max = arr[i];
        }


        //if element is less than max but and greater than secondmax, then only update secondmax

        else if(arr[i]<max && arr[i]>secondmax)
        {
            secondmax = arr[i];
        }
    }

    printf("Second largest number of the array is:\t %d",secondmax);

    return 0;
}
