 #include <stdio.h>
#include <string.h>

int main() {
    char string[30];
    int len, cv = 0, sc = 0, con = 0, i;
    printf("Enter a string (terminate with $):\n");
    fgets(string, sizeof(string), stdin);
    len = strlen(string);

    for (i = 0; i < len; i++) {
        char c = string[i];
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
            c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            cv++;
        } else if (c == ' ') {
            sc++;
        } else {
            con++;
        }
    }

    printf("Number of vowels: %d\nNumber of spaces: %d\nNumber of consonants: %d\n", cv, sc, con);
    return 0;
}