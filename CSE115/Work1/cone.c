// Find area and volume of cone
#include <stdio.h>
#include <math.h>

int main(){

    float PI = 3.1416;
    float r,h,area,volume;
    printf("Enter radius, height of cone: ");
    scanf("%f%f", &r, &h);
    area = PI * r * (r + sqrt(r*r + h*h));
    volume = (PI * r * r * h) / 3.0;
    printf("Area of cone = %f\n", area);
    printf("Volume of cone = %f\n", volume);

}