#include <stdio.h>

// Vòng lặp
double sumFraction2(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / (2 * i);
    }
    return sum;
}

int main() {
    int n;
    printf("Nhập n: ");
    scanf("%d", &n);

    printf("S(n) = %lf\n", sumFraction2(n));

    return 0;
}
