#include <stdio.h>
#include <string.h>


void reverse(char str[], int length) {


    // runs length / 2 because we replace first and last every run
    for (int i = 0; i < length / 2; i++) {

        // get first character of string
        char straight = str[i];
        // get the last character of string - index and length
        char reverse = str[length - i - 1];
        // set str address at index i to the reverse value
        str[i] = reverse;
        // set str address at index length - i - 1 to the first character
        str[length - i - 1] = straight;
    }
}

int main(void) {

    char str[] = "rambuk";

    int length = strlen(str);

    reverse(str, length);

    printf("%s", str);


    return 0;
}
