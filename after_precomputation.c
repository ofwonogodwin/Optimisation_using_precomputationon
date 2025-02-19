//This program am working on precomputes factorials and stores them in an array.
//>>This will avoid recomputing factorials evry time they are needed
#include <stdio.h>

#define MAX 10  // the maximum number for factorial precomputation

// Here we are defining an array to store precomputed values.
long long factorial[MAX + 1];

void precompute() {
    factorial[0] = 1;
    for (int i = 1; i <= MAX; i++) {
        //interating the values from 1 to MAX computing the factorials iteratively.
        factorial[i] = factorial[i - 1] * i;
    }
}
// Instead of re-calculating, we get the precomputed value from the array we made above
long long get_factorial(int n) {
    if (n > MAX) {
        //if the user requests for a number greater than our MAX 10,We inform him that its out of range
        printf("Value out of range! Increase MAX limit.\n");
        return -1;
    }
    return factorial[n];
}
int main() {
    precompute();
    //User enters the number. The program retrievs the factorial instantl from the precomputed array.
    int num;
    printf("Enter a number (0-%d) to get its factorial: ", MAX);
    if(scanf("%d", &num)!= 1){
        printf("Invalid input!");
        return 1;
    }

    if (num >= 0 && num <= MAX) {
        printf("Factorial of %d is %lld\n", num, get_factorial(num));
    } else {
        printf("Number out of range!\n");
    }
    return 0;
}