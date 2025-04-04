#include <stdio.h>

int main() {
    const int LENGTH = 3;
    int colors[LENGTH];

    for (int i=0; i<LENGTH; i++)
        colors[i] = i+1;

    for (int i=0; i<LENGTH; i++)
        printf("%d\n", colors[i]);

    return 0;
}
