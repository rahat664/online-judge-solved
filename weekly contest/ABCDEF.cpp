#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;

int L[1000000],R[1000000],cntL[1000000],cntR[1000000];

int main()
{

    int N,i,j,k;
    scanf("%d",&N);

    int ar[N];

    for(i=0; i<N; i++)
    {
        scanf("%d",&ar[i]);
    }



    int sizeL=0,sizeR=0;
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            for(k=0; k<N; k++)
            {
                L[sizeL++]=(ar[i]*ar[j])+ar[k];
                printf("%d",L[sizeL++]);
            }
        }
    }



}
