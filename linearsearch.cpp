#include <stdio.h>
int main() {
    int arr[5], key, i;
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &key);
    for (i = 0; i < 5; i++) {
        if (arr[i] == key) {
            printf("Number found at position %d.\n", i);
            break;
        }
    }
    if (i == 5)
        printf("Number not found.\n");
}
