#include <stdio.h>
#include <string.h>


void swapWords(char **s, char **t) {
    char *temp;
    temp = *s;
    *s = *t;
    *t = temp;
}

int main() {

    char *words[10] = {"de ", "ab ", "bc ", "jk ", "cd ", "ef ", "ij ", "fg ", "gh ", "hi "};


    printf("words before sort : ");

    size_t wordCount = sizeof(words) / sizeof(words[0]);

    for (int i = 0; i < wordCount ; ++i) {

            printf("%s",words[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (strcmp(words[i], words[j]) > 0)
                swapWords(&words[i], &words[j]);
        }
    }

    printf("words after sort : ");

    for (int i = 0; i < wordCount ; ++i) {

        printf("%s",words[i]);
    }

    return 0;
}
