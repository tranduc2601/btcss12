#include <stdio.h>

int tinhTong(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    printf("Nhap hai so: ");
    scanf("%d %d", &x, &y);
    printf("Tong: %d\n", tinhTong(x, y));
    return 0;
}

