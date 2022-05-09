#include<stdio.h>

//using formula
int sumA(int n)
{
    return n*(n+1)/2;
}

//using loop
int sumB(int n)
{
    int i,s=0;
    for(i=1;i<=n;i++)
     {
        s=s+i;
     }
     return s;  
}

//using recursion
int sumC(int n)
{
    if(n==0)
        return 0;
    return sumC(n-1)+n;
}


int main()
{
    printf("%d\n",sumA(5));
    printf("%d\n",sumB(5));
    printf("%d\n",sumC(5));
}