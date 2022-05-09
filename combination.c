#include<stdio.h>

//calculating factorial 
int fact(int n)
{
    if(n==0)
        return 1;
    return fact(n-1)*n;
}

//using formula
int nCr(int n,int r)
{
    int num,den;
    num=fact(n);
    den=fact(r)*fact(n-r);
    return num/den;
}

//using recursion
int NCR(int n,int r)
{
    if(n==r || r==0)
        return 1;
    return NCR(n-1,r-1)+NCR(n-1,r);
}
int main()
{
    printf("%d\n",nCr(4,2));
    printf("%d",NCR(4,2));
    return 0;
}