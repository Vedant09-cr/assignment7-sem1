#include <stdio.h>

int main() {
    int n, i, element;
    int arr[100];
    int count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &element);

    printf("Positions: ");

    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            printf("%d ", i + 1);
            count++;
        }
    }

    if (count == 0) {
        printf("\nElement not found.");
    } else {
        printf("\nTotal occurrences = %d", count);
    }

    return 0;
}