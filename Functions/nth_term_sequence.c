/*
Write a C program to calculate the Nth term of a sequence where each term is the sum of the previous three terms. 
The first three terms are given as input. If all inputs are zero, print "All have Zero".
*/

#include <stdio.h>

// Function to find the n-th term of a sequence where each term 
// from the 4th term onward is the sum of the previous three

int find_nth_term(int n, int a, int b, int c) {
    // Return the first three terms directly if n is 1, 2, or 3
    
    if (n == 1) return a;
    if (n == 2) return b;
    if (n == 3) return c;

    int next;
    // Use a loop to compute terms from 4 to n
    
    for (int i = 4; i <= n; i++) {
        next = a + b + c; // Next term is the sum of previous three
        a = b;            // Shift values for the next iteration
        b = c;
        c = next;
        
    }
    return c; // Return the nth term
}

int main() {
    int n, a, b, c;

    // Take input for the term position and the first three terms
    scanf("%d %d %d %d", &n, &a, &b, &c);

    // Call function and store result
    int ans = find_nth_term(n, a, b, c);

    // Print the answer
    printf("%d", ans);

    return 0;
}
