#include<stdio.h>

int powerA(int m,int n)
{
    if(n==0)
        return 1;
    return powerA(m,n-1)*m;

}

int powerB(int m,int n)
{
    if(n==0)
        return 1;
    if(n%2==0)
        return powerB(m*m,n/2);
    return m * powerB(m*m,(n-1)/2); 
}

int main()
{
    int x = powerA(2,9);
    int y = powerB(2,9);
    printf("%d\n",x);
    printf("%d\n",y);
}
