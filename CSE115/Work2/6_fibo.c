//
// Created by Khan Asfi Reza on 9/9/23.
//
// 6. Find nth fibonacci
#include "stdio.h"

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int x=0,y=1, temp;
    while (n--){
        printf("%d ", x);
        temp = x;
        x += y;
        y = temp;
    }
}