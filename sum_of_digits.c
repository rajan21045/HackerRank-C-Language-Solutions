/*
Write a program in C that takes a positive integer n (with exactly five digits) as input and 
calculates the sum of its digits. Print the result as output.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);  // Read the five-digit integer from input

    int sum = 0;      // Initialize sum to zero

    // Loop to extract each digit and add to sum
    while (n != 0) {
        int remainder = n % 10;  // Get last digit of n
        sum = sum + remainder;   // Add digit to sum
        n /= 10;                 // Remove the last digit from n
    }

    printf("%d", sum);  // Print the sum of digits

    return 0;
}
