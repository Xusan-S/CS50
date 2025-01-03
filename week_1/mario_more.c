#include <cs50.h>
#include <stdio.h>

int main(){
    int height = get_int("Height: ");
    for(int i = 0; i < height; i++){
        for(int j = height - 1; j > i; j--){
            printf(" "); 
        }
        for(int k = 0; k <= i; k++){
            printf("#"); 
        }
        printf("__");
        for(int l = 0; l <= i; l++){
            printf("#"); 
        }
        
        printf("\n");

    }

}
