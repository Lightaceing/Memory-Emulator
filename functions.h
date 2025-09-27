
extern int cell_count;
extern int width;


void displayMainMemory(char **arr);
char** createMainMemory(int cell_count, int width);
void deallocateMainMemory(char **arr);


char** createMainMemory(int cell_count, int width){
    
    char **ptr_MM = (char**) malloc(sizeof(char*)*cell_count);
    
    for(int i=0;i<cell_count;i++){
        
        char *ptr = (char*) malloc(sizeof(char)*width);
        
        if(ptr == NULL){
            printf("Memory not allocated to the simulator.\n");
            exit;
        }
        
        ptr_MM[i] = ptr;
    }

    // filling #'s
    for(int i=0;i<cell_count;i++){
        
        for(int j=0;j<width;j++){
            ptr_MM[i][j] = '#';
        }
    }

    return ptr_MM;
}


void displayMainMemory(char **arr){

    for(int i=0;i<cell_count;i++){
        for(int j=0;j<width;j++){
            printf("%c", arr[i][j]);

        }
        
        printf("\n");
    }
}


void deallocateMainMemory(char **arr){
    for(int i=0;i<cell_count;i++){
        free(arr[i]);
    }
    free(arr);
    printf("Memory deallocated!");
}