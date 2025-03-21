#include <stdio.h>

int main() {
    float celsius;
    printf("Введите температуру в Цельсиях: ");
    scanf("%f", &celsius);
    float farengeit = (celsius * 9.0f / 5.0f) + 32.0f;
    printf("C = %.0f ; F = %.2f\n", celsius, farengeit);
    return 0;
}
