#include <stdio.h>

int main() {
    int a, b, c;
    printf("Введите три числа: ");
    scanf("%d %d %d", &a, &b, &c);

    int zero = (a == 0) || (b == 0) || (c == 0);
    int neg_count = (a < 0) + (b < 0) + (c < 0);
    int sign = (1 - 2 * (neg_count % 2)) * !zero;

    printf("%d\n", sign);
    return 0;
}
