#include <stdio.h>
#include <string.h>

int main() {
    char blue_balls[5][5];
    const char ball[5] = "blue";
    // заполняем массив строками
    for (int i = 0; i < 5; i++)
        strcpy(blue_balls[i], ball);

    // Вывод содержимого
    for (int i = 0; i < 5; i++)
        printf("blue_balls[%d] = %s\n", i, blue_balls[i]);
    printf("\n");

    // делим размер коробки на размер одного элемента
    int size = sizeof(blue_balls) / sizeof(blue_balls[0]);

    printf("blue_balls capacity is %d\n", size);

    return 0;
}
