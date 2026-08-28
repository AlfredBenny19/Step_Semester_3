#include <stdio.h>
#include <stdbool.h>

int main() {
    int number;
    bool isPrime = true;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        printf("Is the number %d a Prime number? Yes", number);
    else
        printf("Is the number %d a Prime number? No", number);

    return 0;
}