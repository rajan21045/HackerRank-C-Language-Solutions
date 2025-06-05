#include <stdio.h>

void reverseArray(int arr[], int n) {
    int left = 0, right = n - 1;
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

int main() {
    int n;

   int i;
    scanf("%d", &n);

    int arr[n];

   
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, n);

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
/*


Given an array, of size n, reverse it.
Example: If array,arr = [1,2,3,4,5] , after reversing it, the array should be, arr[5,4,3,2,1] .


Input Format

The first line contains an integer,n , denoting the size of the array. The next line contains n space-separated integers denoting the elements of the array.


Constraints
1<=n<=100
1<=arr[i] <=1000, where arr[i] is the ith element of the array.


Output Format

The output is handled by the code given in the editor, which would print the array.

Sample Input 0
6
16 13 7 2 1 12 

Sample Output 0
12 1 2 7 13 16 

*/
