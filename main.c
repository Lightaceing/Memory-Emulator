#include<stdio.h>
#include <stdlib.h>
#include "functions.h"


int main(){
    int cell_count = 8;
    int width = 8;

    char *ptr = createMainMemory(cell_count, width);
    displayMainMemory(ptr, width);
    deallocateMainMemory(ptr);
}