#include <stdio.h>
#include <string.h>

int main() {
    const int LENGTH = 3;
    const int WORDLENGTH = 10;
    char colors[LENGTH][WORDLENGTH];  
    // = {"red", "blue", "green"}; is error because VLA can not be initialized on definition
    strcpy(colors[0], "red");
    strcpy(colors[1], "blue");
    strcpy(colors[2], "green");

    for (int i=0; i<LENGTH; i++)
        printf("%s\n", colors[i]);

    return 0;
}
