#include<stdio.h>
#include <stdlib.h>
#include "functions.h"

// global var.
    int cell_count = 8;
    int width = 8;

int main(){

    // scanf("Enter");
    char **ptr = createMainMemory(cell_count, width);
    displayMainMemory(ptr);
    // deallocateMainMemory(ptr);
    //printf("%zu",sizeof(char*));
    return 0;
}