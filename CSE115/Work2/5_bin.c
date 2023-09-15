//
// Created by Khan Asfi Reza on 9/9/23.
//
// 5. Binary to decimal

#include "stdio.h"

int main(){
    int bin;
    printf("Enter a binary number: ");
    scanf("%d", &bin);
    int temp = bin;
    int power = 1;
    int dec = 0;
    while (temp){
        int rem = temp % 10;
        dec += power * rem;
        temp /= 10;
        power *= 2;
    }
    printf("Decimal = %d", dec);

}