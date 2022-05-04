//KMP

#include <stdio.h>
#include <string.h>
char txt[50],pat[50];
int M ,N ,LPS[50],j=0,i=0;
void Compute_LPS_Array();
void KMP_Search();
void main()
{
    printf("Enter the text\n");
    gets(txt);
    printf("Enter the pattern\n");
    gets(pat);
    KMP_Search();
}

void Compute_LPS_Array()
{
    int len = 0;
    LPS[0] = 0;
    i = 1;
    while(i < M)
    {
        if(pat[i] == pat[len])
        {
            len++;
            LPS[i] = len;
            i++;    
        }
        else
        {
            if( len != 0 )
            len = LPS[len-1];
            else
            {
                LPS[i] = 0;
                i++;
            }
        }
    }
}

void KMP_Search()
{
    int j=0,i=0;
    M = strlen(pat);
    N = strlen(txt);
    Compute_LPS_Array();
    while(i < N)
    {
        if(pat[j] == txt[i])
        {
            j++;
            i++;
        }
        if (j == M){
            printf("Found pattern at index %d\n", i-j);
            j = LPS[j-1];
        }
        else if(pat[j] != txt[i]){
            if(j != 0)
                j = LPS[j-1];
            else
                i = i+1;
        }
    }
}