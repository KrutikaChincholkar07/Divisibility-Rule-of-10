#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 10 == 0)
        printf("%d is divisible by 10", num);
    else
        printf("%d is not divisible by 10", num);

    return 0;
}
