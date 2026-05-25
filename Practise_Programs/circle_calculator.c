#include<stdio.h>
#include<math.h>

int main(){
    double radius = 0.0;
    double circumference = 0.0;
    double area = 0.0 ;
    double surfarea = 0.0;
    double volume = 0.0;
    const double PI = 3.14;
    

    printf("Enter the radius of circle: ");
    scanf("%lf",&radius);

    circumference = 2*PI*radius;
    area = PI*pow(radius,2);
    surfarea = 4*PI*pow(radius,2);
    volume = (4.0/3.0)*PI*pow(radius,3);

    printf("The radius of circle is %.3lf\n The circumference of circle is: %.3lf\n The area of circle is:  %.3lf\n",radius,circumference,area);
    printf("The surface area of circle is %.2lf\n ",surfarea);
    printf("The voulme of circle is %.2lf\n",volume);



    return 0;

}