#include <stdio.h>

int main() {
    int i, sum = 0;

    for (i = 11; i <= 20; i++) {
        if (i % 2 == 1) {
            printf("odd no.:%d\n", i);
        }
    }

    return 0;
}
