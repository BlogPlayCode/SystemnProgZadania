#include <stdio.h>

int main() {
    int n;
    printf("Введите число: ");
    scanf("%d", &n);
    int is_2pow = n > 0 && (n & (n - 1)) == 0;
    printf("%d\n", is_2pow);
    return 0;
}
