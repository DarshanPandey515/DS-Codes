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
        int min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }

        if (min_index != i)
        {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
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
// Enter element[0]: 1
// Enter element[1]: 4
// Enter element[2]: 6
// Enter element[3]: 2
// Enter element[4]: 3
// Sorted array: 1 2 3 4 6 