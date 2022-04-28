#include<stdio.h>
#include<stdlib.h>

//making array

struct Array
{
    int A[10];
    int size;
    int length;
};

//using loop
int BinarySearch(struct Array arr,int key)
{
    int l,mid,h;
    l=0;
    h=arr.length-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr.A[mid])
            return mid;
        else if(key<arr.A[mid])
            h=mid-1;
        else
            l=mid+1;
    }
    return -1;
}

//using recusion
int RBinSearch(int a[],int l,int h,int key)
{
    int mid;
    if(l<=h)
    {
        mid=(l+h)/2;
        if(key==a[mid])
            return mid;
        else if(key<a[mid])
            return RBinSearch(a,l,mid-1,key);
        else
            return RBinSearch(a,mid+1,h,key);
    }
    else 
        return -1;
    
}

int main()
{
    struct Array arr={{2,3,4,5,6},10,5};
    printf("%d\n",BinarySearch(arr,7));
    printf("%d",RBinSearch(arr.A,0,arr.length,7));
    return 0;
}