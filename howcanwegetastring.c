#include <stdio.h>

int main() {
    // Method 1: Initialize the character array explicitly
    char str1[] = "Hello, world!";   // here in this u give string to any array  compiler automatically 
 // read length of string 
    // Method 2: Declare and assign each character one by one
    char str2[14];     // here we define string length in array and by using array indexing we are initialising   
    str2[0] = 'H';     // string to index 
    str2[1] = 'e';
    str2[2] = 'l';   //In C, a string is represented as an array of characters terminated by a null character '\0'. 
                  //To create and work with strings, you can use character arrays (strings) or
                   // pointers to character arrays.
    str2[3] = 'l';
    str2[4] = 'o';
    str2[5] = ',';
    str2[6] = ' ';
    str2[7] = 'w';
    str2[8] = 'o';
    str2[9] = 'r';
    str2[10] = 'l';
    str2[11] = 'd';
    str2[12] = '!';
    str2[13] = '\0'; // Null-terminate the string

    printf("str1: %s\n", str1); // Output: Hello, world!
    printf("str2: %s\n", str2); // Output: Hello, world!

    return 0;
}
