#include <stdio.h>
int main() {
    int num, i;
    int factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        factorial = factorial * i;
    }

    printf("Factorial of %d = %d\n", num, factorial);

    return 0;
}


