// 1. Write a C program to find Strong Numbers within m and n where m, n are 
// user inputs. A number is strong if the sum of its digits’ factorials is equal to the number itself
#include <stdio.h>

int main(){

    int m, n;
    printf("Enter starting and ending range: ");
    scanf("%d%d", &m, &n);
    printf("Strong numbers between 1 and 200 are: ");
    for(int i=m;i<=n;i++){
        int sum = 0;
        int x = i;
        while (x)
        {
            int rem = x % 10;
            int fact = 1;
            for (int j = 1; j <= rem; j++)
            {
                fact *= j; 
            }
            sum += fact;
            x /= 10;
        }
        if(i == sum){
            printf("%d ", i);
        }
    }
}