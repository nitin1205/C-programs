#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int*A;
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for(i=0;i<=arr.length;i++)
        printf("%d ",arr.A[i]);
}

void Append(struct Array *arr,int x)
{
    if(arr->length < arr->size)
        arr->A[arr->length++] = x;
}

void Insert(struct Array *arr,int index,int x)
{
    int i;
    if(index >=0 && index <= arr->length)
    {
        for(i=arr->length;i>index;i--)
            arr->A[i]=arr->A[i-1];
        arr->A[index]=x;
        arr->length++;
            
    } 
}

int Delete(struct Array *arr,int index)
{
    int x=0;
    int i;

    if(index>=0 && index<arr->length)
    {
        x=arr->A[index];
        for(i=index;i<arr->length-1;i++)
            arr->A[i]=arr->A[i+1];
        arr->length--;
        return x;
    }
    return 0;
}

int LinearSearch(struct Array *arr,int key)
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(key==arr->A[i])
        return i;
    }
    return -1;
}

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void Reverse(struct Array *arr)
{
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--)
    {
        swap(&arr->A[i],&arr->A[j]);
    }
}

int Sum(struct Array *arr)
{
    int i,total=0;
    for(i=0;i<arr->length;i++)
        total+=arr->A[i];
    return total;

}



int main()
{
    struct Array arr1;
    int ch;
    int x,index;
    printf("Enter Size of Array");
    scanf("%d",& arr1.size);
    arr1.A = (int *)malloc(arr1.size*sizeof(int));
    do
    {
    printf("Menu\n");
    printf("1. Insert\n");
    printf("2. Append\n");
    printf("3. Delete\n");
    printf("4. Search\n");
    printf("5. Sum\n");
    printf("6. Reverse\n");
    printf("7. Display\n");
    printf("8. Exit\n");

    printf("Enter the Choice ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1: printf("Enter an element and index ");
            scanf("%d%d",&x,&index);
            Insert(&arr1,index,x);
            break;
        
        case 2: printf("Enter the element ");
            scanf("%d",x);
            Append(&arr1,x);
            break;
            
        case 3: printf("Enter index ");
            scanf("%d",&index);
            x=Delete(&arr1,index);
            printf("Deleted Element is %d\n",x);
            break;

        case 4: printf("Enter element to search ");
            scanf("%d",&x);
            index = LinearSearch(&arr1,x);
            printf("Element index %d",index);
            break;

        case 5: printf("Sum is %d",Sum(&arr1));
            break;

        case 6: printf("The Reversed array is ");
            Reverse(&arr1);
            break;

        case 7:Display(arr1);
    }
    }while(ch<7);

    return 0;
}