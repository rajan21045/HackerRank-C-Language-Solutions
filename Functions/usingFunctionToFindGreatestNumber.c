/*

Task
Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.

Note
There is not built in max function in C. Code that will be reused is often put in a separate function, e.g. int max(x, y) that returns the greater of the two values.

*/

#include <stdio.h>

int max_of_four(int a,int b, int c,int d){
    
    int max;
    max = a;
    
    if(b> max){
        max = b;
    }
    if(c>max){
        max = c;
    }
    if(d> max){
        max =d;
    }
    return max;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

/*
Objective
In this challenge, you will learn simple usage of functions in C. Functions are a bunch of statements grouped together. A function is provided with zero or more arguments, and it executes the statements on it. Based on the return type, it either returns nothing (void) or something.

Input Format
Input will contain four integers - a, b, c, d, one on each line.

Output Format
Print the greatest of the four integers.
Note: I/O will be automatically handled.


Sample Input
3
4
6
5

Sample Output
6

*/
