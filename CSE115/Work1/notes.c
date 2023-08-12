#include <stdio.h>

int main() {
    int amount, n500, n100, n50, n20, n10, n5, n2, n1;
    // Input bill amount and available notes
    printf("Enter amount: ");
    scanf("%d", &amount);
    
    printf("500 : ");
    scanf("%d", &n500);
    
    printf("100 : ");
    scanf("%d", &n100);

    printf("50 : ");
    scanf("%d", &n50);

    printf("20 : ");
    scanf("%d", &n20);

    printf("10 : ");
    scanf("%d", &n10);

    printf("5 : ");
    scanf("%d", &n5);

    printf("2 : ");
    scanf("%d", &n2);

    printf("1 : ");
    scanf("%d", &n1);

    // Calculate the total amount of available notes
    int totalAmount = (n500 * 500) + (n100 * 100) + (n50 * 50) + (n20 * 20) + (n10 * 10) + (n5 * 5) + (n2 * 2) + n1;
    
    // Check if Farhan can pay the bill
    if (totalAmount >= amount) {
        printf("Farhan can pay the bill by using the following counts of different notes: \n");
        signed int remaining = amount;
        // How many 500 can be used
        int x500 = remaining / 500;
        // If 'how many 500' notes can be used is greater than input notes then 
        if (x500 > n500)
        {
            x500 = n500;
        }
        // Get remaining amount
        remaining = remaining - (x500 * 500);
        printf("500: %d\n", x500);

        int x100 = remaining / 100;
        // If 'how many 100' notes can be used is greater than input notes then 
        if (x100 > n100)
        {
            x100 = n100;
        }
        // Get remaining amount
        remaining = remaining  - (x100 * 100);
        printf("100: %d\n", x100);

        int x50 = remaining / 50;
        // If 'how many 50' notes can be used is greater than input notes then 
        if (x50 > n50)
        {
            x50 = n50;
        }
        // Get remaining amount
        remaining = remaining - (x50 * 50);
        printf("50: %d\n", x50);

        int x20 = remaining / 20;
        // If 'how many 20' notes can be used is greater than input notes then 
        if (x20 > n20)
        {
            x20 = n20;
        }
        //  Get remaining amount
        remaining = remaining - (x20 * 20);
        printf("20: %d\n", x20);

        int x10 = remaining / 10;
        // If 'how many 10' notes can be used is greater than input notes then 
        if (x10 > n10)
        {
            x10 = n10;
        }
        //  Get remaining amount
        remaining = remaining - (x10 * 10);
        printf("10: %d\n", x10);
        
        int x5 = remaining / 5;
        // If 'how many 5' notes can be used is greater than input notes then 
        if (x5 > n5)
        {
            x5 = n5;
        }
        //  Get remaining amount
        remaining = remaining - (x5 * 5);
        printf("5: %d\n", x5);

        int x2 = remaining / 2;
        // If 'how many 20' notes can be used is greater than input notes then 
        if (x2 > n2)
        {
            x2 = n2;
        }
        // Get remaining amount
        remaining = remaining - (x2 * 2);;
        printf("2: %d\n", x2);

        int x1 = remaining;
        printf("1: %d\n", x1);
       
    } else {
        printf("Farhan cannot pay the bill using available notes.\n");
    }
    return 0;
}