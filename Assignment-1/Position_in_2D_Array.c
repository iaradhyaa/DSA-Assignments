#include <stdio.h>

int main() {
    int rows, cols;
    int i, j, key, found = 0;
    int arr[10][10];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the 2D array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter the element to find: ");
    scanf("%d", &key);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (arr[i][j] == key) {
                printf("Element %d found at position: Row = %d, Column = %d\n", key, i, j);
                found = 1;
                break;  
            }
        }
        if (found)
            break;  
    }

    if (!found)
        printf("Element %d not found in the array.\n", key);

    return 0;
}
