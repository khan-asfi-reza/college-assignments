//
// Created by Khan Asfi Reza on 9/9/23.
//
// 7C.
#include "stdio.h"

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int space, row;
    int mid = (int)(n / 2) + 1;
    for (int i = 1; i <= n; i++) {
        if(i <= mid){
            space = mid - i;
        } else{
            space = i - mid;
        }
        for (int x = 1; x <= space; x++) {
            printf(" ");
        }
        if(i <= mid){
            row = 2 * i - 1;
        }
        else{
            row = 2 * (i - (2 * (i - mid))) - 1;
        }
        for (int j = 1; j <= row; ++j) {
            if(j > 1 && j < row){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }

}