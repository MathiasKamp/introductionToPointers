#include <stdio.h>

void sortNumbers(int numbers[], int length) {

    int tempVal;

    // first loop gets first array element
    for (int i = 0; i < length; ++i) {

        // 2nd loop gets the next array element
        for (int j = i + 1; j < length; ++j) {

            // comparison of the first and the 2nd element
            if (numbers[i] > numbers[j]) {
                // put first element in tempVal
                tempVal = numbers[i];
                // move 2nd element to first elements place in memory
                numbers[i] = numbers[j];
                // set the tempVal to the 2nd elements place in memory
                numbers[j] = tempVal;
            }
        }
    }
}

int main(void) {

    int numbers[5] = {10, 4, 3, 8, 9};

    int numbersLength = sizeof(numbers) / sizeof(int);

    printf("%s", "unsorted array : ");

    for (int j = 0; j < numbersLength; ++j) {

        printf(" %d ", numbers[j]);
    }

    printf("%s", "\n");

    sortNumbers(numbers, numbersLength);

    printf("%s", "sorted array : ");

    for (int j = 0; j < numbersLength; ++j) {

        printf(" %d ", numbers[j]);
    }

    return 0;
}
