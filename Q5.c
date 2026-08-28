#include <stdio.h>

int main() {
    int number, origNumber, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    origNumber = number;

    while (number != 0) {
        digit = number % 10;
        sum = sum + digit * digit * digit;
        number = number / 10;
    }

    if (sum == origNumber)
        printf("Is the number %d an Armstrong number? Yes", origNumber);
    else
        printf("Is the number %d an Armstrong number? No", origNumber);

    return 0;
}