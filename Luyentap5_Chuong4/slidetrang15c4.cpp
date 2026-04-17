#include <stdio.h>

// Funtion to add twwo numbers
int add (int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5, num2 = 10;

    //call the funtion with aguments
    int sum = add( num1, num2);

    printf("The sum of %d and %d is: %d\n", num1, num2, sum);
    return 0;

}