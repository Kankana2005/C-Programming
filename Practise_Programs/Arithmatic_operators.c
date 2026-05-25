#include <stdio.h>
#include <stdbool.h>
#include<string.h>
int main(){
    // Lesson 4 Arithmatic opearators

int x = 2;
int y = 3;
int z = 0;
z = x+y ;
// z= x-y;
// z= x*y;

// //division 
float a = 3;
float b = 0;
b = x/a;

// //modulo 
int c= 10;
int d = 3;
int m = 0;
m = c%d;
printf ("%d\n",m); 
printf("%d\n",z);
printf("%f\n",b);

// // increment and decremnet
x++;
// x--;
printf("%d",x);

// // augmented assignments

x+=3;
//  x *=2;
// x/=2;
printf("%d",x);


return 0;
}