//Insertion Sort 
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[20],i,j,n,k=0,key,s;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter Elements: ")
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=1;j<n;j++)
    {
        key=a[j];
        i=j-1;
        while(i>=0 && a[i]>key)
        {
            a[i+1]=a[i];
            i=i-1;
        }
        a[i+1]=key;
        ++k;
        printf("\nOutput after pass %d: ",k);
        for(s=0;s<n;s++)
        {
            printf("%d ",a[s]);
        }
    }
}