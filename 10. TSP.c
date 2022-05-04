//TSP
#include<stdio.h>

int array[10][10],completed[10],n,cost=0;
void input()
{
    int i, j;
    printf("Enter the number of vertices: ");
    scanf("%d",&n);
    printf("\nEnter the cost matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            scanf("%d",&array[i][j]);
        completed[i] = 0;
    }
}

int min(int c)
{
    int i, nc = 999;
    int min = 999, kmin;
    for(i = 0; i < n; i++)
    {
        if((array[c][i] != 0) && (completed[i] == 0))
            if(array[c][i] + array[i][c] < min)
            {
                min = array[i][0] + array[c][i];
                kmin = array[c][i];
                nc = i;
            }
    }
    if(min != 999)
        cost += kmin;
    return nc;
}

void mincost(int city)
{
    int i, ncity;
    completed[city] = 1;
    printf("%d--->", city + 1);
    ncity = min(city);
    if(ncity == 999)
    {
        ncity = 0;
        printf("%d",ncity+1);
        cost += array[city][ncity];
        return;
    }
    mincost(ncity);
}
int main()
{
    input();
    printf("\nThe minimum cost path is: ");
    mincost(0);
    printf("\nThe minimum cost is: %d",cost);
}