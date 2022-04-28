#include<stdio.h>

//using loop:-
int fibA(int n)
{
    int t0=0,t1=1,s=0,i;
    if(n<=1)
        return n;
    for(i=2;i<=n;i++)
    {
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    return s;
}

//using recursion:-
int fibB(int n)
{
    if(n<=1)
        return n;
    return fibB(n-2)+fibB(n-1);
}

//using memoization
int f[10];
int fibC(int n)
{
    if(n<=1)
    {
        f[n]=n;
        return n;
    }
    else
    {
        if(f[n-2]==-1)
            f[n-2]=fibC(n-2);
        if(f[n-1]==-1)
            f[n-1]=fibC(n-1);

        return f[n-2]+f[n-1];
    }
}


int main()
{
    int n=8;
    printf("%d\n",fibA(n));
    printf("%d\n",fibB(n));
    int i;
    for(i=0;i<=10;i++)
        f[i]=-1;
    printf("%d\n",fibC(n));
    return 0;
}