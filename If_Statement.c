#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main(){

    // // example 1

    int age = 0;
    int x = 0;

    printf("Enter your age: ");
    scanf("%d",&age);
    

    if(age>=18){
        printf("You are eligible to vote\n");
    }

    else if (age<0){
        printf("Invalid input\n");
    }

    else if(age>80){
        printf("you are too old\n");
    }

    else{
        printf("You are not eligible to vote\n");
        x = 18-age;
        printf("Come after %d years",x);
    }


    // example 2

    // bool isStudent = false;
    // if(isStudent){
    //     printf("You are a student");
    // }
    // else{
    //     printf("You are not a student");
    // }


    // alternative
    // bool isStudent;

    // printf("Are you a student? yes = 1, No = 0: ");
    // scanf("%d",&isStudent);

    // if(isStudent){
    //     printf("You can enter the fest\n");
    // }
    // else{
    //     printf("You are noy eligible to enter the fest\n");
    // }


    // example 3

    // char name[50] = "";

    // printf("Enter your name : ");
    // fgets(name,sizeof(name),stdin);
    // name[strlen(name)-1] ='\0';

    // if(strlen(name) == 0){
    //     printf("Please enter your name\n");
    // }
    // else{
    //     printf("hello %s",name);
    // }









    return 0;
}