#include <stdio.h>

int indexOf(char text[], char target[]) {
    int textLength = 0;
    int targetLength = 0;

    // Считаем длину text
    while (text[textLength] != '\0') {
        textLength++;
    }

    // Считаем длину target
    while (target[targetLength] != '\0') {
        targetLength++;
    }

    // Ищем target в text
    int foundIndex = -1;
    for (int i = 0; i <= textLength - targetLength; i++) {
        int match = 1;
        for (int j = 0; j < targetLength; j++) {
            if (text[i + j] != target[j]) {
                match = 0;
                break;
            }
        }
        if (match == 1) {
            foundIndex = i;
            break;
        }
    }

    return foundIndex;
}

int main() {
    char text[256];
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);
    if (text[sizeof(text)/sizeof(text[0]) - 1] == '\n') text[sizeof(text)/sizeof(text[0]) - 1] = '\0';

    char target[32];
    printf("Enter target: ");
    scanf("%s", &target);

    printf("\n");
    int index = indexOf(text, target);
    if (index == -1) printf("Not found");
    else printf("Found in %d index", index);

    return 0;
}

