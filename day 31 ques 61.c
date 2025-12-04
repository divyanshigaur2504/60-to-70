#include <stdio.h>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int n;
    scanf("%d", &n); 
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }
    int target;
    scanf("%d", &target); 
    int result = linearSearch(arr, n, target);
    if (result == -1) {
        printf("%d\n", result);
    } else {
        printf("Found at index %d\n", result);
    }
    return 0;
}
