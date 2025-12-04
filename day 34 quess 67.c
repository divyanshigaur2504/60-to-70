#include <stdio.h>

void insertElement(int arr[], int n, int pos, int element) {
    
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = element; 
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
    int arr[n + 1]; 
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }
    int pos, element;
    scanf("%d %d", &pos, &element); 
    insertElement(arr, n, pos, element);
    printArray(arr, n + 1);
    return 0;
}
