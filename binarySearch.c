#include <stdio.h>

int main()
{
    int arr[100], size, target;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter element[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    int low = 0;
    int high = size - 1;
    int found = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            found = mid;
            break;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (found != -1)
    {
        printf("Element %d found at index %d.\n", target, found);
    }
    else
    {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}


// output:
// Enter the number of elements: 5
// Enter element[0]: 5
// Enter element[1]: 6
// Enter element[2]: 7
// Enter element[3]: 8
// Enter element[4]: 9
// Enter the element to search: 7
// Element 7 found at index 2.