#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int temp = i, sum = 0, digits = 0;
        int val = i;
        while (val > 0) {
            val /= 10;
            digits++;
        }
        val = i;
        while (val > 0) {
            int rem = val % 10;
            sum += pow(rem, digits);
            val /= 10;
        }
        if (sum == i) {
            printf("%d ", i);
        }
    }
    return 0;
}