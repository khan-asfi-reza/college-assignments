//
// Created by Khan Asfi Reza on 9/9/23.
//
// 3. Calculate the sum of the following series, where  and  are provided as user inputs.
#include "stdio.h"

int main(){
    int x, n;
    printf("Enter x,n number: ");
    scanf("%d%d", &x, &n);
    float sum = 1;
    float x_pow = 1;
    float fact = 1;
    for (int i = 2; i <= n; i++) {
        int k = i - 1;
        x_pow = x_pow * x * x * -1;
        fact *= k;
        sum += x_pow / fact;
    }
    printf("Sum = %f", sum);

}