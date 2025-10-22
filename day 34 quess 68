#include <stdio.h>

void deleteElement(int arr[], int* n, int pos) {
    
    for (int i = pos - 1; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--; 
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n); 
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }
    int pos;
    scanf("%d", &pos); 
    deleteElement(arr, &n, pos);
    printArray(arr, n);
    return 0;
}
