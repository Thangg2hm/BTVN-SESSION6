#include <stdio.h>

int main() {
    int n;
    printf("nhap vao mot so nguyen bat ki: ");
    scanf("%d", &n);
    printf("cac uoc cua %d là: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

