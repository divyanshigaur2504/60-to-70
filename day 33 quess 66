#include <stdio.h>

void insertElement(int arr[], int n, int element) {
    int i = n - 1;
    
    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = element; 
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
    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]); 
    }
    int element;
    scanf("%d", &element); 
    insertElement(arr, n, element);
    printArray(arr, n + 1);
    return 0;
}
