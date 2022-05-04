//Merge Sort 
#include <stdio.h>
#include <stdlib.h>
#define MAX 20
int a[MAX];
int n,i;
void Merge(int, int);
void Msort(int, int, int);
void Disp();

void main()
{
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter Elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    Merge(0,n-1);
}

void Merge(int low, int high)
{
    int mid;
    if(low!=high)
    {
        mid=(low+high)/2;
        Merge(low,mid);
        Merge(mid+1,high);
        Msort(low,mid,high);
    }
    Disp();
    printf("\n");
}

void Msort(int low, int mid, int high)
{
    int temp[MAX];
    int i=low;
    int j=mid+1;
    int k=low;
    while((i<=mid)&&(j<=high))
    {
        if(a[i]<=a[j])
        temp[k++]=a[i++];
        else
        temp[k++]=a[j++];
    }
    while(i<=mid)
        temp[k++]=a[i++];
    while(j<=high)
        temp[k++]=a[j++];
    for(i=low;i<=high;i++)
        a[i]=temp[i];
}

void Disp()
{
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}