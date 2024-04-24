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

    for (int i = 0; i < size - 1; i++)
    {
        int swapped = 0;

        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;            }
        }

        if (swapped == 0)
        {
            break;
        }
    }

    printf("Sorted array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}


// output:
// Enter the number of elements: 5
// Enter array elements:
// Enter element[0]: 5
// Enter element[1]: 6
// Enter element[2]: 4
// Enter element[3]: 8
// Enter element[4]: 1
// Sorted array:
// 1 4 5 6 8 