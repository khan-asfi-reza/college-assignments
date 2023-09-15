//
// Created by Khan Asfi Reza on 9/9/23.
//
// 4. Write a program in C to print the n-th perfect number.
#include "stdio.h"

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int x = n;
    int i = 0;
    while (n){
        i++;
        int sum = 0;
        for (int j = 1; j < i; j++) {
            if(i % j == 0) {
                sum += j;
            }
        }
        if(sum == i){
            n--;
        }

    }
    printf("%dth perfect number = %d", x, i);
}