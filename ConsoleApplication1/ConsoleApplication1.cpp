#include <stdio.h>

int largest_digit(int n) {
    int a = n / 100;
    int b = (n / 10) % 10;
    int c = n % 10;

    int max_n = a;
    if (b > max_n) max_n = b;
    if (c > max_n) max_n = c;

    return max_n;
}

void main() {
    int n;
    printf("nhap vao so nguyen duong 3 chu so : ");
    scanf_s("%d", &n);

    if (n < 100 || n > 999) {
        printf("khong phai so co 3 chu so");
    }
    else {
        printf("Chu so lon nhat la %d\n", largest_digit(n));
    }
}
