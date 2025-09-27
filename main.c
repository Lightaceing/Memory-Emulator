#include<stdio.h>
#include <stdlib.h>

void displayMainMemory(char *arr, int width);
char* createMainMemory(int addr, int width);

char* createMainMemory(int addr, int width){
    char *ptr = (char*) malloc(sizeof(char)*width);
    if(ptr == NULL){
        printf("Memory not allocated.\n");
        exit;
    }

    for(int i = 0;i<width;i++){
        ptr[i] = "#";
    }
    return ptr;
}

void displayMainMemory(char *arr, int width){
    for(int i=0;i<=width;i++){
        
    }
}


int main(){

}