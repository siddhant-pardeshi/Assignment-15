//Write a function in C to merge two arrays of the same size sorted in descending order

#include <stdio.h>

void merge_arrays(int arr1[], int arr2[], int n, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < n && j < n) {
        if (arr1[i] >= arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }

    // copy remaining elements from arr1
    while (i < n) {
        result[k++] = arr1[i++];
    }

    // copy remaining elements from arr2
    while (j < n) {
        result[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {9, 7, 5, 3, 1};
    int arr2[] = {8, 6, 4, 2, 0};
    int n = 5;
    int result[n*2];

    merge_arrays(arr1, arr2, n, result);

    printf("Merged array in descending order: ");
    for (int i = 0; i < n*2; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
