#include<stdio.h>
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
            }
        }
    }


    for(i=0; i<N; i++)
    {
        if(ar[i]==0)
        {
            continue;
        }
        for(j=0; j<N; j++)
        {
            for(k=0; k<N; k++)
            {
                R[sizeR++]=ar[i]*(ar[j]+ar[k]);
            }
        }
    }

    sort(L,L+sizeL);
    sort(R,R+sizeR);

    int t=1;
    cntL[0]=1;
    cntR[0]=1;
    for(i=1; i<sizeL; i++)
    {
        if(L[i]!=L[t-1])
        {
            L[t]=L[i];
            cntL[t]=1;
            ++t;
        }
        else
        {
            ++cntL[t-1];
        }
    }

    int t1=1;
    for(i=1; i<sizeR; i++)
    {
        if(R[i]!=R[t1-1])
        {
            R[t1]=R[i];
            cntR[t1]=1;
            ++t1;
        }
        else
        {
            ++cntR[t1-1];
        }
    }
    long long ans=0;


    for(i=0,j=0; i<t&&j<t1;)
    {
        if(R[j]==L[i])
        {
            ans+=(long long)cntL[i]*cntR[j];
        }
        if(L[i]<R[j])
        {
            i++;
        }
        else if(L[i]>R[j])
        {
            j++;
        }
        else
        {
            i++;
            j++;
        }

    }

    printf("%lld\n",ans);

    return 0;
}
