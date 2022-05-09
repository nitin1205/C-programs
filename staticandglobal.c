#include <stdio.h>

int fun1(int n)
{
    if(n>0)
    {
        return fun1(n-1)+n;
    }
    return 0;
}

int fun2(int n)
{
    static int x = 0;
    if(n>0)
    {
        x++;
        return fun2(n-1)+x;
    }
    return 0;
}

int main(){
    int r,k;
    r=fun1(5);
    k=fun2(5);
    printf("%d\n",r);
    printf("%d\n",k);
    return 0;
}