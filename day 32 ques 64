#include <stdio.h>

int mostFrequentDigit(int n) {
    int count[10] = {0}; 
    
    
    while (n > 0) {
        int digit = n % 10;
        count[digit]++;
        n /= 10;
    }
    
  
    int maxCount = 0;
    int mostFrequent = -1;
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequent = i;
        } else if (count[i] == maxCount && i < mostFrequent) {
            mostFrequent = i; 
        }
    }
    
    return mostFrequent;
}

int main() {
    int n;
    scanf("%d", &n); 
    printf("%d\n", mostFrequentDigit(n));
    return 0;
}
