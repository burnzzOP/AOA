//Selection Sort 
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[20],n,i,j,k,temp,min;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter Elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            min=j;
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
        printf("\nOutput after pass %d: ",i+1);
        for(k=0;k<n;k++)
        {
            printf("%d ",a[k]);
        }
    }
}