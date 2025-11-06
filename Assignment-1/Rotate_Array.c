#include <stdio.h>

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], rotated[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number of rotations: ");
    scanf("%d", &k);

    k = k % n; // Handle rotations larger than array size

    for (int i = 0; i < n; i++)
        rotated[(i + k) % n] = arr[i];

    printf("Rotated array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", rotated[i]);

    return 0;
}
