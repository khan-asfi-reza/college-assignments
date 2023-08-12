#include <stdio.h>
#include <math.h>

int main(){

    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    if(x % 5 == 0 && x % 11 == 0){
        printf("%d is multiple of both 5 and 11", x);
    }
    else if(x % 5 == 0){
        printf("%d is multiple of 5", x);
    }
    else if(x % 11 == 0){
        printf("%d is multiple of 11", x);
    }
    else {
        printf("%d is multiple of niether 5 or 11", x);
    }

}