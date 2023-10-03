//Write a program to print the sum of all THREE digit odd numbers
int main() {
   
    int sum = 0;  // Initialize sum to zero
    
    // Loop through numbers from 1 to 9
    for (int num = 101; num <= 999; num += 2) {
        sum += num;  // Add each odd number to the sum
    }
    
    printf("Sum of all three-digit odd numbers: %d\n", sum);
    
    return 0;
}