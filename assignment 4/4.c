#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int temp = i, sum = 0;
        while (temp > 0) {
            int rem = temp % 10;
            int fact = 1;
            for (int j = 1; j <= rem; j++) {
                fact *= j;
            }
            sum += fact;
            temp /= 10;
        }
        if (sum == i) {
            printf("%d ", i);
        }
    }
    return 0;
}