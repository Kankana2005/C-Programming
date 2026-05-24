#include<stdio.h>
#include<math.h>

int main(){
    float radius = 0.0f;
    float circumference = 0.0f;
    float area = 0.0f ;
    float pi = 3.14;

    printf("Enter the radius of circle: ");
    scanf("%f",&radius);

    circumference = 2*pi*radius;
    area = pi*pow(radius,2);

    printf("The radius of circle is %.3f\n The circumference of circle is: %.3f\n The area of circle is:  %.3f",radius,circumference,area);


    return 0;

}