#include <stdio.h>

/**
 * For a given year, find the next year that has all the digits different.
 */

int diffDigits(int a) {
    if (a == 0) return 1;

    int arr[10] = {0};
    int digit = 0;
    while (a > 0) {
        digit = a % 10;
        if (arr[digit] == 1) {
            return 0;
        } else {
            arr[digit] = 1;
        }
        a /= 10;
    }

    return 1;
}

int happyYear(int a) {
    a++;
    while (diffDigits(a) == 0) {
        a++;
    }
    printf("next year: %d\n", a);
}

int main() {
    happyYear(2017); // output = 2018
    happyYear(1990); // output = 2013
    happyYear(2021); // output = 2031
}