#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    // Complete this function    
    int c = *a;
    int d= *b;
    
    *a = c +d;
    *b = abs(c -d);
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
/*
Objective

In this challenge, you will learn to implement the basic functionalities of pointers in C. A pointer in C is a way to share a memory address among different contexts (primarily functions). They are primarily used whenever a 
function needs to modify the content of a variable that it does not own.

In order to access the memory address of a variable,val , prepend it with & sign. For example, &val returns the memory address of val.

Input Format

The input will contain two integers, a and b, separated by a newline.

Output Format

Modify the two values in place and the code stub main() will print their values.

Note: Input/ouput will be automatically handled. You only have to complete the function described in the 'task' section.

Sample Input
4
5

Sample Output
9
1

*/
