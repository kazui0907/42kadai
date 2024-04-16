#include <stdio.h>
#include <stdlib.h>

void decompose_number(unsigned long number) {
    if (number == 0) {
        return;
    }
    
    if (number >= 1000) {
        unsigned long multiplier = 1;
        while (number / (multiplier * 1000) > 0) {
            multiplier *= 1000;
        }

        decompose_number(number / multiplier);
        printf("%lu ", multiplier);
        
        if (number % multiplier > 0) {
            decompose_number(number % multiplier);
        }
    } else if (number >= 100) {
        printf("%lu ", (number / 100) * 100);
        if (number % 100 > 0) {
            decompose_number(number % 100);
        }
    } else if (number >= 20) {
        printf("%lu ", (number / 10) * 10);
        if (number % 10 > 0) {
            printf("%lu ", number % 10);
        }
    } else {
        printf("%lu ", number);
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <number>\n", argv[0]);
        return 1;
    }

    char *end;
    unsigned long inputNumber = strtoul(argv[1], &end, 10);
    if (*end != '\0') {
        fprintf(stderr, "Invalid input. Please enter a valid number.\n");
        return 1;
    }

    decompose_number(inputNumber);
    printf("\n");

    return 0;
}
