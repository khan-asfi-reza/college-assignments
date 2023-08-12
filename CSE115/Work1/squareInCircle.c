/*
Write a C program that reads the radius r of a circle and the side a of a square from user 
and then checks if that square can be placed inside that circle or not. 
*/
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