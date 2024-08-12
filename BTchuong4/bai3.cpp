#include <stdio.h>

// Vòng lặp
double sumFraction(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (double)i / (i + 1);
    }
    return sum;
}

int main() {
    int n;
    printf("Nhập n: ");
    scanf("%d", &n);

    printf("S(n) = %lf\n", sumFraction(n));

    return 0;
}
