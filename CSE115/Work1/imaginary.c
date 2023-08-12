// Find area and volume of sphere
#include <stdio.h>
#include <math.h>

int main(){

    int r1, i1, r2, i2;
    printf("Enter Real part of first complex number: ");
    scanf("%d", &r1);
    printf("Enter Imaginary part of first complex number: ");
    scanf("%d", &i1);
    printf("Enter Real part of second complex number: ");
    scanf("%d", &r2);
    printf("Enter Imaginary part of second complex number: ");
    scanf("%d", &i2);

    int rSum = r1 + r2;
    int iSum = i1 + i2;
    printf("Sum = %d ", rSum);
    if (iSum > 0){
        printf("+ %di\n", iSum);
    }
    else if(iSum < 0){
       printf("%di\n", iSum);     
    }

    int rDiff = r1 - r2;
    int iDiff = i1 - i2;
    printf("Difference = %d ", rDiff);
    if (iDiff > 0){
        printf("+ %di\n", iDiff);
    }
    else if(iDiff < 0){
       printf("%di\n", iDiff);     
    }

    int rProd = (r1 * r2) - (i1 * i2);
    int iProd = (i1 * r2) + (i2 * r1);
    printf("Product = %d ", rProd);
    if (iProd > 0){
        printf("+ %di\n", iProd);
    }
    else if(iProd < 0){
       printf("%di\n", iProd);     
    }

}