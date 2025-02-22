// Fix the below program - find the problem(s) and fix them
// The message Hello World (the message variable) needs to be in an array of Messages 20 times, but memory should be reallocated after there are 10 items are in the array, as 10 items is the initial memory allocation for the array

// Close enough is good enough

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char* value;
} Message;

int main() {
    Message* m = malloc(10 * sizeof(Message));
    char* message = "Hello World";

    for (int i = 0; i < 20; ++i) {
        if(i == 10) {
            m = realloc(m, 20 * sizeof(Message));
        }
        m[i].value = message;
        printf("%s\n", m[i].value);
    }

    free(m);
    m = NULL;
    
    return 0;
}