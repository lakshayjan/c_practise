#include <stdio.h>

int main() {
    int a[50];
    int b[50];
    int c[50];
    int i;

    // Input for array 'a'
    for (i = 0; i < 50; i++) {
        printf("Enter an element for array a:");
        scanf("%d", &a[i]);
    }

    // Input for array 'b'
    for (i = 0; i < 50; i++) {
        printf("Enter an element for array b:");
        scanf("%d", &b[i]);
    }

    // Calculate the sum of arrays 'a' and 'b' and store in array 'c'
  //  for (i = 0; i < 50; i++) {
    //    c[i] = a[i] + b[i];
   // }

    // Display the sum array 'c'
    for (i = 0; i < 50; i++) {
        printf("Sum of arrays at index %d: %d\n", i, c[i]);
    }

    return 0;
}