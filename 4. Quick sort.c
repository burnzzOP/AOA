//Quick Sort 
#include <stdio.h>
#include <stdlib.h>

int quicksort(int a[], int lb, int ub);
int c,swap,ii;
int main()
{
    int a[20], n, i,lb,ub;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    quicksort(a, 0, n-1);
    printf("\nThe Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\nNo. of Iterations: %d\t", ii);
    printf("\nNo. of Comparisons: %d\t", c);
    printf("\nNo. of Swaps: %d\t", swap);
    return 0;
}
int quicksort(int a[], int lb, int ub)
{
    int temp,start,end;
    if (lb < ub)
    {
        int pivot = lb;
        start = lb;
        end = ub;
        ii++;
    while (start < end)
    {
    // c++;
        while (a[start] <= a[pivot])
        {
            start++;
            c++;
        }
        while (a[end] > a[pivot])
        {
            end--;
            c++;
        }
        if(start<end)
        {
            swap++;
            temp = a[start];
            a[start] = a[end];
            a[end] = temp;
        }   
    }
    temp = a[lb];
    a[lb] = a[end];
    a[end] = temp;
    swap++;
    quicksort(a,lb,end-1);
    quicksort(a,end+1,ub);
    }
}