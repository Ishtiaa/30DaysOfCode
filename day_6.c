#include<stdio.h>
int main(){
int ar[100],i,search,n;
printf("enter number of elements in array:");
scanf("%d",&n);
printf("enter %d elements:\n",n );
for(i=1;i<=n;i++)
    scanf("%d",&ar[i]);

    printf("enter the number to search:");
scanf("%d",&search);
for(i=1;i<=n;i++)
{
    if(ar[i]==search)
    {
        printf("%d is present at location %d,",search,i);
        break;
    }
}

 if(i==n+1)
 {
             printf("%d is nor present at location %d,",search);
 }


return 0;
}


