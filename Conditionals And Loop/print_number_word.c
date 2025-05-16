/*
 * Write a program in C that takes a positive integer n as input
 * and prints its lowercase English word representation 
 * if it lies between 1 and 9 (both inclusive).
 * If the number is greater than 9, print: Greater than 9
 */

#include <stdio.h>  // Include standard input-output header

int main() {
    int n;

    // Read input from user (no prompt as per online judge requirement)
    scanf("%d", &n);

    // Check the value of n and print the corresponding word
    if (n == 1) {
        printf("one");
    }
    else if (n == 2) {
        printf("two");
    }
    else if (n == 3) {
        printf("three");
    }
    else if (n == 4) {
        printf("four");
    }
    else if (n == 5) {
        printf("five");
    }
    else if (n == 6) {
        printf("six");
    }
    else if (n == 7) {
        printf("seven");
    }
    else if (n == 8) {
        printf("eight");
    }
    else if (n == 9) {
        printf("nine");
    }
    else {
        // If n is greater than 9, print this message
        printf("Greater than 9");
    }

    return 0; // Indicate successful execution
}
