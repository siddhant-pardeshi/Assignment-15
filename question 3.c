//Write a function to sort an array of any size. (TSRN)

#include <stdio.h>

void sort(int a[], int size) {
    int i, j, temp;

    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    int i, n;

    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter the elements of array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    sort(a, n);

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

