void displayMainMemory(char *arr, int width);
char* createMainMemory(int cell_count, int width);
bool deallocateMainMemory(char *arr);

//TODO:impletment cell_count 
char* createMainMemory(int cell_count, int width){
    
    char *ptr = (char*) malloc(sizeof(char)*width);
    if(ptr == NULL){
        printf("Memory not allocated.\n");
        exit;
    }

    for(int i = 0;i<width;i++){
        ptr[i] = '#';
    }
    return ptr;
}


//TODO:implement cell_count
void displayMainMemory(char *arr, int width){
    for(int i=0;i<width;i++){
        printf("%c", *(arr + sizeof(char)*i));
    }
}

bool deallocateMainMemory(char *arr){
    free(arr);
    printf("Memory deallocated!");
}