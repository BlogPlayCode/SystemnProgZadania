#include <stdio.h>
#include <string.h>

int main() {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    char letter = 'l'; // Буква, которую нужно найти
    int index = -1;

    for (int i = 0; i<sizeof(alphabet)/sizeof(alphabet[0]); i++) {
        if (alphabet[i] == letter) {
            index = i+1; // +1, так как позиции в алфавите с 1, а индексы с 0
            break; // Выходим из цикла после нахождения буквы
        }
    }

    if (index != -1) {
        printf("Letter '%c' found in %d position\n", letter, index);
    } else {
        printf("Letter '%c' not found in alphabet\n", letter);
    }

    return 0;
}
