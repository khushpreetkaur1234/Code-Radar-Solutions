// Your code here...
#include <stdio.h>

// Function to reverse a portion of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array to the right by K positions
void rotateArray(int arr[], int n, int k) {
    k = k % n; // Handle cases where k > n
    reverse(arr, 0, n - 1);       // Reverse the entire array
    reverse(arr, 0, k - 1);       // Reverse the first k elements
    reverse(arr, k, n - 1);       // Reverse the remaining elements
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]\n);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n); // Input array size

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Input array elements
    }

    int k;
    scanf("%d", &k); // Input number of rotations

    rotateArray(arr, n, k);
    printArray(arr, n\n);

    return 0;
}
