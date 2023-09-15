//
// Created by Khan Asfi Reza on 9/9/23.
//
// 7A.
#include "stdio.h"

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    char a = 'A';
    for (int i = 1; i <= n; i++) {
        int l = 2*i-1;
        for (int x = 1; x <= n - i; x++) {
            printf(" ");
        }
        for (int j = 1; j <= l; ++j) {
            if(j % 2 == 0){
                printf(" ");
            }else{
                printf("%c", a);
                a += 1;
            }
        }
        printf("\n");
    }

}