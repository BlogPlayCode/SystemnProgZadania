#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main() {
    srand(time(NULL));

    char colorful_balls[15][6];

    // заполняем массив
    char values[3][6] = {"red", "green", "blue"};
    for (int i = 0; i < 15; i++) {
        strcpy(colorful_balls[i], values[rand() % 3]);
    }

    // Вывод содержимого
    for (int i = 0; i < 15; i++)
        printf("colorful_balls[%d] = %s\n", i, colorful_balls[i]);
    printf("\n");

    // делим размер коробки на размер одного элемента
    int size = sizeof(colorful_balls) / sizeof(colorful_balls[0]);

    printf("colorful_balls capacity is %d\n", size);

    return 0;
}
