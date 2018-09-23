#include <cs50.h>
#include <stdio.h>

int main(void) {
    // I want to print pizza 5 times, but I am only printing it 4 times
    // use eprintf to see what range of values i is taking
    // What's the fix?
    for(int i = 0; i < 4; i++) {
        // eprinf("%i", i);
        printf("pizza\n");
    }
}
