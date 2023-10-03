//Print the Largest eight-digit prime number
#include <stdio.h>

int main() {
    int i, j, y = -1, vag = 0;

    for (i = 99999900; i <= 99999999; i++) {
        int count = 0;

        for(j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }

        if (count == 2) {
            vag++;
            y = i;
        }
    }

    if (y != -1) {
        printf("Largest prime number: %d\n", y);
    } else {
       printf("No prime number found within the range.\n");
   }

    return 0;
}
