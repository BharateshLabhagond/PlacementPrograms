//Count each of element in an array 
#include <stdio.h>

void main()
{
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements into array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int visited[size];

    // Initialize visited array with 0
    for (int i = 0; i < size; i++)
    {
        visited[i] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        int count = 1;
        if (visited[i] == 0) // not visited yet
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    visited[j] = -1; // mark as visited
                }
            }
            printf("\n'%d' occurs %d times", arr[i], count);
        }
    }
}
