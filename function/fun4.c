#include <stdio.h>

int areaofrect(int length, int breadth); // Function prototype declaration

int main() {

    int l, b, result_area;
    l = 10, b = 20;
  
    result_area = areaofrect(l, b); // Corrected the function name here
    printf("%d\n", result_area);
       l = 20 ,b = 40;
       result_area = areaofrect(l, b); // Corrected the function name here
    printf("%d", result_area);
    return 0;
}

int areaofrect(int length, int breadth) {
    int area = length * breadth;
    return area;
}
