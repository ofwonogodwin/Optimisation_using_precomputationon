//In this program, we are trying to get factorials of numbers of numbers without precomputation technique.

#include <stdio.h>

// the recursive function to calculate factorial
//the function computes factorial recursively
long long factorial(int n) {
    if (n == 0) return 1;  // the base case is : 0! = 1
    return n * factorial(n - 1);  // Recursive call
    //there fore each call depends on the previuos computations 
    //E.g each time you request factorial(5),the program recomputes from scratch instaed of using the previous results.


    //This results to slower execution of the program.
}

int main() {
    //User enters the number  and the program calculates and prints its factorial recursively
    int num;
    printf("Enter a number to get its factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("There is no factorial for  negative numbers!\n");
    } else {
        printf("Factorial of %d is %lld\n", num, factorial(num));
    }

    return 0;
}