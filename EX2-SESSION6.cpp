#include <stdio.h>

int main() {
    int so;
    int demChan = 0, demLe = 0;

    for (int i = 1; i <= 5; i++) {
        printf("nhap vao so nguyen thu %d: ", i);
        scanf("%d", &so);

        if (so % 2 == 0) {
            demChan++;
        } else {
            demLe++;
        }
    }

    printf("so luong so chan la: %d\n", demChan);
    printf("so luong so le la: %d\n", demLe);

    return 0;
}

