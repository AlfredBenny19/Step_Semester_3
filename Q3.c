#include <stdio.h>

int main() {
    int number, origNumber, reversedNumber = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    origNumber = number;

    while (number != 0) {
        digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number = number / 10;
    }

    if (reversedNumber == origNumber)
        printf("Is the number %d a Palindrome", origNumber);
    else
        printf("Is the number %d not a Palindrome", origNumber);

    return 0;
}