#include <stdio.h>
#define MAX_SIZE 100
int main()
{

    int size, i, toSearch, found;
    printf("Enter size of array: ");
    scanf("%d", &size);
int arr[size];
    /* Input elements of array */
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &toSearch);

    /* Assume that element does not exists in array */
    found = 0; 

    for(i=0; i<size; i++)
    {
        if(arr[i] == toSearch)
        { found = 1;
            break; }
    }

    if(found == 1) { printf("\n%d is found at position %d", toSearch, i + 1); }
    else
    { printf("\n%d is not found in the array", toSearch); }
    return 0;
}
