#include <stdio.h>

int main() {
    int number, lastDigit;

    printf("Enter a number: ");
    scanf("%d", &number);

    lastDigit = number - (number / 10) * 10;

    printf("The last digit of %d is %d.\n", number, lastDigit);

    return 0;
}
