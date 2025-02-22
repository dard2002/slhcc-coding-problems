// Fix the below program - find the problem(s) and fix them
// The message Hello World (the message variable) needs to be in an array of Messages 20 times, but memory should be reallocated after there are 10 items are in the array, as 10 items is the initial memory allocation for the array

#include <stdio.h>

typedef struct {
    char* value;
} Message;

int main() {
    Message* m;
    char* message = "Hello World";

    for (int i = 0; i < 20; ++i) {
        m[i].value = message;
        printf("%s\n", m[i].value);
    }

    // Free memory here

    return 0;
}