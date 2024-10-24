#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int number;
    printf("Введіть число: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d є простим числом.\n", number);
    } else {
        printf("%d не є простим числом.\n", number);
    }

    return 0;
}
