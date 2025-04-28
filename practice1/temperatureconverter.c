#include <stdio.h>

int main() {
    float celsius;
    printf("Введите температуру в Цельсиях: ");
    scanf("%f", &celsius);
    
    float farengeit = (float) (celsius * 9.0 / 5.0) + 32.0;
    
    printf("C = %.0f ; F = %.2f\n", celsius, farengeit);
    return 0;
}
