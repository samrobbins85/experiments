#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n=0;
    int * my_ptr;
    int sum = 0;
    
    printf("How many integers are required?: ");
    scanf("%d", &n);
    
//    Try to allocate memory
    my_ptr= (int*) calloc(n, sizeof(int));
    
//    Successful memory allocation?
    if(my_ptr == NULL){
        printf("Out of memory!");
        exit(0);
    }
    
//    Get the data
    for(int i=0; i<n; i++){
        printf("Enter integer (%d): ", i+1);
        scanf("%d", my_ptr+i);
    }
    
    puts("Your integers were: \n");
//    Sum and display
    for(int i; i<n; i++){
        printf("%d ", *(my_ptr+i));
        sum+= *(my_ptr +i);
    }
    printf("\nSum of numbers is %d", sum);
    
//    Free the memory block allocated
    free(my_ptr);

    return 0;
}

