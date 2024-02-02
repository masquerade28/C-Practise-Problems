#include <stdio.h>

int findTriplet(int arr[], int n) {
    int i, left, right;

    // Sort the array in ascending order
    for (i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < n - 2; i++) {
        left = i + 1;
        right = n - 1;

        while (left < right) {
            int currentSum = arr[i] + arr[left] + arr[right];
            if (currentSum == 0) {
                // Triplet found
                return 1;
            } else if (currentSum < 0) {
                left++;
            } else {
                right--;
            }
        }
    }

    // No triplet found
    return 0;
}

int main() {
    int arr[] = {1,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (findTriplet(arr, n)) {
        printf("Triplet exists\n");
    } else {
        printf("Triplet does not exist\n");
    }

    return 0;
}
