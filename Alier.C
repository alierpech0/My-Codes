// ALIER PECH EMMANUEL M24B23/039 B28826
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Multiples of three print Fuzz
    // Multiples of five print Buzz
    // Multiples of seven print FuzzBuzz
    int x , multiple ;
    printf("Multiples of 3,5 and 7.\n");
    printf("Enter any number:");
    scanf("%d",&x);
    
    if (x % 3 == 0){
    printf("Fuzz");
}
    
    else if (x % 5 == 0){
        printf("Buzz");
    }
    
    else if (x % 7 == 0){
        printf("FuzzBuzz");
    }
    
    else {
        printf("INVAID NUMBER");
    }
    return 0;
}