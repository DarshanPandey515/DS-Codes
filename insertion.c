#include<stdio.h>

int main(int argc, char const *argv[])
{
    int arr[100],element,pos,size;
    printf("Enter the number of elements: ");
    scanf("%d",&size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter array elements[%d]: ",i);
        scanf("%d",&arr[i]);
    }

    printf("Enter the element to insert & postion: ");
    scanf("%d %d",&element,&pos);

    for (int i = size; i >= pos; i--)
    {
        arr[i] = arr[i-1];
    }
    
    arr[pos] = element;
    size++;

    printf("Updated array:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    } 


    return 0;
}
