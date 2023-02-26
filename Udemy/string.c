#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int validate(char *str) {
    int len = strlen(str);
    if (str[len-1] == '\n') { // remove newline character
        str[len-1] = '\0';
    }
    for (int i = 0; str[i] != '\0'; i++) {
        // ASCII CODE A-Z {65 - 90}, a-z {97 - 122}, 0-9 {48 - 57}, space {32}
        if (!((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122) ||
              (str[i] >= 48 && str[i] <= 57) || (str[i] == 32))) {
                return 0;
        }
    } 
    return 1;
}

int main() {

    char str[100];
    fgets(str, 100, stdin);
    int result = validate(str);
   (result == 1) ? printf("Valid sentence\n") :printf("Invalid sentence\n");

    return 0;
}
