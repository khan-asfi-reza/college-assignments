/*
5.	Write a C program to check whether an input number is a multiple of only 5 (e.g. 5, 10, 15, ...), 
only 11 (e.g. 11, 22, 33, ...), both 5 and 11 (e.g. 55, 110, ....), or neither of them (e.g. 2,3, 4, 6, 7, 8, 9, 12, ....).
*/
#include <stdio.h>

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