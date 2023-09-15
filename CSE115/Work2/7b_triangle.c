//
// Created by Khan Asfi Reza on 10/9/23.
//
// 7.B

#include "stdio.h"

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int x = 1; x <= n - i; x++) {
            printf(" ");
        }
        for (int j = 1; j <= i; ++j) {
            if(j % 2 == 0){
                printf("1");
            }else{
                printf("0");
            }
        }
        printf("\n");
    }

}