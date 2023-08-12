
#include <stdio.h>
#include <math.h>

int main(){

    float r, a;
    printf("Enter radius and side of square: ");
    scanf("%f%f", &r, &a);
    if( r * 2 >= sqrt(2) * a){
        printf("square can be placed inside a circle");
    }
    else{
        printf("Square cannot be placed inside a circle");
    }

}