// Fix the below program - find the problem(s) and fix them
// Program should print a list of 10 apples in an array one by one with every first apple being red, 
// and every second apple being green, must also use proper memory management with pointers

#include <stdio.h>
#include <stdlib.h>

enum Color {
    RED,
    GREEN
};

typedef struct {
    enum Color color;
    int id;
} Apple;

int main() {
    Apple apples[10];

    for ( int i = 0; i < 10; ++i ) {
        apples[i].id = i + 1;
        apples[i].color = i % 2 ? RED : GREEN;
        
        printf("Apple id %d with Color %d\n", apples[i].id, apples[i].color);
    }
    
    return 0;
}