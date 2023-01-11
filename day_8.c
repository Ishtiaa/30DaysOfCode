//array insert
#include <stdio.h>
int main()
{
int arr[100], pos, i, num, v;

printf("Enter number of elements in array\n");
scanf("%d", &num);
printf("Enter %d elements\n", num);
for (i = 1; i <= num; i++)
scanf("%d", &arr[i]);
printf("Enter the location where you wish to insert an element\n");
scanf("%d", &pos);
printf("Enter the value to insert\n");
scanf("%d", &v);
for (i = num; i >= pos; i--)
{

arr[i+1] = arr[i];

}
arr[pos] = v;

num=num+1;
printf("new array is\n");
for (i= 1; i<=num; i++)
printf("%d\n", arr[i]);
return 0;
}
