//array deletion
/*#include <stdio.h>
int main()
{
int arr[100], pos, i, num ;

printf("Enter number of elements in array\n");
scanf("%d", &num);
printf("Enter %d elements\n", num);
for (i = 1; i <= num; i++)
scanf("%d", &arr[i]);
printf("Enter the location where you wish to delete element\n");
scanf("%d", &pos);

if (pos >num)
printf("Deletion not possible.\n");
else
{
for (i = pos; i <=num ; i++)
arr[i] = arr[i+1];
}

num=num-1;
printf("new array is\n");
for (i= 1; i<=num; i++)
printf("%d\n", arr[i]);
return 0;
}*/



//array deletion
/*#include <stdio.h>
int main()
{
    int arr[100], pos, i, num, v;

    printf("Enter number of elements in array\n");
    scanf("%d", &num);
    printf("Enter %d elements\n", num);
    for (i = 1; i <= num; i++)
        scanf("%d", &arr[i]);
    printf("Enter the location where you wish to delete element\n");
    scanf("%d", &pos);

    if (pos >= num)
    {
        printf("Deletion not possible.\n");
    }
    else
    {
        for (i = pos; i <num ; i++)
            arr[i] = arr[i+1];
    }

    //num=num;
    printf("new array is\n");
    for (i= 1; i<=num; i++)
        printf("%d\n", arr[i]);

    return 0;
}*/



//array deletion
#include <stdio.h>
int main()
{
    int arr[100], pos, i, num, v;

    printf("Enter number of elements in array\n");
    scanf("%d", &num);
    printf("Enter %d elements\n", num);
    for (i = 1; i <= num; i++)
        scanf("%d", &arr[i]);
    printf("Enter the location where you wish to delete element\n");
    scanf("%d", &pos);

    if (pos >= num)
    {
        printf("Deletion not possible.\n");
    }
    else
    {
        for (i = pos; i < num ; i++)
            arr[i] = arr[i+1];

    printf("new array is\n");
    for (i= 1; i< num; i++)
    {
        printf("%d\n", arr[i]);
    }
    }
    return 0;
}
