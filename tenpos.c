#include <stdio.h>

int main() {
    int x,y;

    printf("Enter a two-digit number: ");
    scanf("%d", &x);
    // Extract the digit in the "Ones" position
    y =  x/10;
    printf("The digit in the 'tens' position is: %d\n", y);
    return 0;
}
