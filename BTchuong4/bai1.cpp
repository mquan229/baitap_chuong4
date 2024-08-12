#include <stdio.h>

int sum(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);

    printf("S(n) = %d \n", sum(n));
   

    return 0;
}
