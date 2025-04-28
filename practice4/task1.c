#include <stdio.h>
#include <string.h>

int main() {
    char red_balls[10][4];
    const char ball[4] = "red";
    // заполняем массив строками
    for (int i = 0; i < 10; i++)
        strcpy(red_balls[i], ball);

    // Вывод содержимого
    for (int i = 0; i < 10; i++)
        printf("red_balls[%d] = %s\n", i, red_balls[i]);
    printf("\n");

    // делим размер коробки на размер одного элемента
    int size = sizeof(red_balls) / sizeof(red_balls[0]);

    printf("red_balls capacity is %d\n", size);

    return 0;
}
