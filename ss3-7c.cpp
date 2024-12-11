#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Nhập một số nguyên có 4 chữ số: ");
    scanf("%d", &number);

    sum += number % 10;
    number /= 10;
    sum += number % 10;
    number /= 10;
    sum += number % 10;
    number /= 10;
    sum += number % 10;

    printf("Tổng các chữ số: %d\n", sum);

    return 0;
}