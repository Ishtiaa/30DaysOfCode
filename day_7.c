//bubble sort programe
#include <stdio.h>

int main()
{
  int arr[100], num, i, d, swap;

  printf("Enter number of elements\n");
  scanf("%d", &num);

  printf("Enter %d elements\n", num);

  for (i = 1; i <= num; i++)
    scanf("%d", &arr[i]);

  for (i = 1 ; i <= num - 1; i++)
  {
    for (d = 1 ; d <= num - i - 1; d++)
    {
      if (arr[d] > arr[d+1])
      {
        swap       = arr[d];
        arr[d]   = arr[d+1];
        arr[d+1] = swap;
      }
    }
  }

  printf("list of the numbers in ascending order:\n");

  for (i = 1; i <= num; i++)
     printf("%d\n", arr[i]);

  return 0;
}
