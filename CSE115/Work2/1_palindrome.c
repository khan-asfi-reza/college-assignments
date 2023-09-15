//
// Created by Khan Asfi Reza on 9/9/23.
//
// 1. Write a C program to read a number from user and
// check whether given number is a square palindrome or not.
#include <stdio.h>
#include <math.h>

int main(){

    int inp, reverse=0;
    printf("Enter a number: ");
    scanf("%d", &inp);
    int x = inp;
    while(x){
        int rem = x % 10;
        reverse = reverse * 10 + rem;
        x /= 10;
    }
    int root = (int)sqrt(inp);

    if(reverse == inp && root * root == inp){
        printf("Number: %d is a square palindrome", inp);
    }
    else{
        printf("Number: %d is not a square palindrome", inp);
    }

}