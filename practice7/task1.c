#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int digit1;
    int digit2;

    printf("Enter digit1: ");
    scanf("%d", &digit1);
    printf("Enter digit2: ");
    scanf("%d", &digit2);

    printf("digit1 = %d\ndigit2 = %d\n\n", digit1, digit2);

    printf("max is %d\n", max(digit1, digit2));

    return 0;
}

