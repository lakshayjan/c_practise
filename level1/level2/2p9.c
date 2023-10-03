#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 15; i <= 95; i += 10) {
        sum += i;
    }

    printf("The sum of two-digit numbers whose one's digit is 5: %d\n", sum);

    return 0;
}
