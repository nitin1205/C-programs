#include<stdio.h>

//using loop
int factA(int n)
{
    int i,m=1;
    for(i=1;i<=n;i++)
        m*=i;
    return m;
}

//using recursion
int factB(int n)
{
    if(n==0)
        return 1;
    return factB(n-1)*n;
}

int main()
{
    int x,y;
    x=factA(5);
    y=factB(5);
    printf("%d\n",x);
    printf("%d\n",y);
    return 0;

}