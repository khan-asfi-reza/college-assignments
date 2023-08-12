// Find area and volume of sphere
#include <stdio.h>
#include <math.h>

int main(){

    float PI = 3.1416;
    float r, area, volume;
    printf("Enter radius of sphere: ");
    scanf("%f", &r);
    area = ( 4 * PI * r * r ); 
    volume = (4/3.0) * PI * r * r *r ;
    printf("Area of sphere = %f\n", area);
    printf("Volume of sphere = %f\n", volume);

}