#include "mbed.h"

int main() {

    // Example list of numbers to sum:
    int list[] = {1,-7,4,6,10,11,3,0,-1};

    // Expected result is 27 with the provided numbers
    printf("The sum of the numbers in the array is: %d\n", arraySum(list, 9));

    // Uncomment this when you're ready to write the second function
    // printIntArray(list, 9);

    while (true) {
        sleep();
    }
}
