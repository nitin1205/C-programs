#include<stdio.h>

//method 1
double eA(int x,int n)
{
    static double p=1,f=1;
    double r;
    if(n==0)
        return 1;
    else
    {
        r=eA(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}

//method 2:-horner's rule
//using loop
double eB1(int x,int n)
{
    double s=1;
    int i;
    double num=1,den=1;
    for(i=1;i<=n;i++)
    {
        num*=x;
        den*=i;
        s+=num/den;
    }
    return s;
}

//using recursion:-
double eB2(int x,int n)
{
    static double s;
    if(n==0)
        return s;
    s=1+x*s/n;
    return eB2(x,n-1);

}



int main()
{
    int x = 1, n = 10;
    printf("%lf\n",eA(x,n));
    printf("%lf\n",eB1(x,n));
    printf("%lf\n",eB2(x,n));
    return 0;
}