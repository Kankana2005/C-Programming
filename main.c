#include <stdio.h>
#include <stdbool.h>
#include<string.h>
int main(){

    // lesson 1 printf and comments 

    // This is my first comment
    /*hello this is 
    a multiline comment */

    // printf("Hello this is my first code \n");
    // printf("I am learning C programming");


    // lesson 2: Variables 

    // int age = 25;
    // int year = 2026; 
    // int quantity = 2;
    // printf("you are %d years old \n ", age );
    // printf("The year is %d is \n ",year);
    // printf("You have ordred %d item\n", quantity);

    // float gpa = 2.5;
    // float price = 19.99;
    // float temp = -10.222;

    // printf("Your gps is %.2f\n",gpa);
    // printf("The price is: %.2f \n",price);
    // printf("The temperatur is %.2f \n", temp);

    // double pi = 3.14158234758595;
    // double e = 2.718994638037653;
    // printf("The value of pi is %.10lf \n",pi);
    // printf("The value of e is %lf\n",e);

    // char grade = 'F';
    // char symbol = '@';
    // printf("Your grade is %c \n",grade);
    // printf("Your faviorite symbol is %c\n",symbol);

    // char name[] = "Kankana Ghosh";
    // char food[] = "biriyani";
    // char email[] = "kankanaghosh128@gmail.com";
    // printf("Hello my name is %s\n",name);
    // printf("my faviorite food is %s\n",food);
    // printf("My email is %s\n",email);

    // bool isOnline = true;
    // bool isStudent = false;
    // bool forSale = false;
    // printf("%d", isOnline);
    // if (forSale){
    //     printf("That item is for sale");
    
    // }
    // else{
    //     printf("That item is not for sale");
    // }


    // lesson 3 : Format specifiers

//     int age = 25;
//     float price = 19.99;
//     double pi = 3.14567893456;
//     char currency = '$';
//     char name[] = "kankana";
//     printf("%d\n",age);
//     printf("%.3f\n",price);
//     printf("%lf\n",pi);
//     printf("%c\n",currency);
//     printf("%s\n",name);

//  //width 
//  int num1 = 1;
//  int num2 = 10;
//  int num3 = -100;
//    printf("%+d\n",num1);
//    printf("%+d\n",num2);
//    printf("%+d\n",num3);

// Precision 
// float price1 = 19.99;
// float price2 = 1.50;
// float price3 = -100.00; 

// printf("%+7.2f\n", price1);
// printf("%+7.2f\n",price2);
// printf("%+7.2f\n",price3);



// Lesson 4 Arithmatic opearators

// int x = 2;
// int y = 3;
// int z = 0;
// z = x+y ;
// // z= x-y;
// // z= x*y;

// //division 
// float a = 3;
// float b = 0;
// b = x/a;

// //modulo 
// int c= 10;
// int d = 3;
// int m = 0;
// m = c%d;
// printf ("%d\n",m); 
// printf("%d\n",z);
// printf("%f\n",b);

// // increment and decremnet
// // x++;
// // // x--;
// // printf("%d",x);

// // augmented assignments

// x+=3;
// //  x *=2;
// // x/=2;
// printf("%d",x);



// Lesson 5 : user Input
int age = 0;
float gpa = 0.0f;
char grade = '\0';
char name[30] = "";

printf("Enter your age: ");
scanf("%d",&age);

printf("Enter your gpa: ");
scanf("%f",&gpa);

printf("Enter your grade: ");
scanf(" %c",&grade);

getchar();
printf("Enter your name: ");
fgets(name,sizeof(name),stdin);
name[strlen(name)-1] = '\0';


printf("%s\n",name);
printf("%d\n",age);
printf("%f\n",gpa);
printf("%c\n",grade);
printf("%s\n",name);



    

    return 0;
}

