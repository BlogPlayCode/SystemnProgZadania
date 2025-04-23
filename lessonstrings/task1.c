#include <stdio.h>

int main() {
    char lines[3][30] = {
        "/test.txt",
        "Hello,",
        "World!"
    };

    printf("File name: %s\n", lines[0]);

    char content[100];
    int index = 0;
    for (int i = 1; i < 3; i++) {
        int j = 0;
        while (lines[i][j] != '\0') {
            content[index] = lines[i][j];
            index++;
            j++;
        }
        content[index] = '\n';
        index++;
    }
    content[index] = '\0';

    printf("\nFile content:\n%s", content);

    char target[] = "Hello";
    int contentLength = 0;
    int targetLength = 0;

    while (content[contentLength] != '\0') contentLength++;

    while (target[targetLength] != '\0') targetLength++;

    int found = 0;
    for (int i = 0; i <= contentLength - targetLength; i++) {
        int match = 1;
        for (int j = 0; j < targetLength; j++)
            if (content[i + j] != target[j]) {
                match = 0; break;
            }
        if (match == 1) {
            found = 1; break;
        }
    }

    if (found) printf("\nWord \"%s\" found in text!\n", target);
    else printf("\nWord \"%s\" not found\n", target);

    return 0;
}
