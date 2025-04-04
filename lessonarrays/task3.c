#include <stdio.h>

int main() {
    const int LENGTH = 3;
    int numbers[LENGTH];

    for (int i=0; i<LENGTH; i++)
        numbers[i] = i+1;

    for (int i=0; i<LENGTH; i++)
        printf("%d\n", numbers[i]);

    return 0;
}
