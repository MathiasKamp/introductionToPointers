#include <stdio.h>
#include <string.h>


int main() {

    char str[100] = "hej med dig hvad hedder du";

    printf("string value : %s", str);

    // first word before white space is beeing pointed at
    char *pStr = strtok(str, " ");

    int wordCount = 0;

    while (pStr != NULL) {

        // count words up
        wordCount++;
        // get next word via the pStr by parsing NULL as str
        pStr = strtok(NULL, " ");

    }

    printf(" : has %d words", wordCount);

    return 0;
}
