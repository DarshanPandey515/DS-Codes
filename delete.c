#include <stdio.h>

int main()
{
    int arr[100], pos, size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter array element[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of element to delete: ");
    scanf("%d", &pos);


    for (int i = pos; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    size--;

    printf("Updated array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
