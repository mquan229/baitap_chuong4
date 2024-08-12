#include <stdio.h>
#include <math.h>

// Đệ quy
double sqrtRecursion(int n) {
    if (n == 1) return sqrt(2);
    return sqrt(2 + sqrtRecursion(n - 1));
}

// Vòng lặp
double sqrtLoop(int n) {
    double result = 0;
    for (int i = 0; i < n; i++) {
        result = sqrt(2 + result);
    }
    return result;
}

int main() {
    int n;
    printf("Nhập n: ");
    scanf("%d", &n);

    printf("S(n) = %lf (đệ quy)\n", sqrtRecursion(n));
    printf("S(n) = %lf (vòng lặp)\n", sqrtLoop(n));

    return 0;
}
