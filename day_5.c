//count total even & odd numbers
#include<stdio.h>
int main()
{
    int num, i, arr[100];
    int Even_num = 0, Odd_num = 0;

printf("\n Enter the Size of the Array : \n ");
scanf("%d", &num);

printf("\n Enter the Elements of the array: \n");
    for(i = 1; i<=num; i++)
      {
scanf("%d", &arr[i]);
      }

    for(i = 1; i<= num; i ++)
      {
       if(arr[i] % 2 == 0)
       {
Even_num++;
       }
       else
       {
Odd_num++;
       }
 }
printf("\n Total Even Numbers in this Array: %d ", Even_num);
printf("\n Total Odd Numbers in this Array: %d ", Odd_num);
return 0;
}
