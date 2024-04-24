#include <stdio.h>

int main()
{
    int arr[100], size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter element[%d]: ", i);
        scanf("%d", &arr[i]);
    }


    for (int i = 1; i < size; i++)
    {
        int key = arr[i]; 
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    printf("Sorted array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


// output:
// Enter the number of elements: 5
// Enter element[0]: 6
// Enter element[1]: 2
// Enter element[2]: 8
// Enter element[3]: 9
// Enter element[4]: 5
// Sorted array: 2 5 6 8 9 