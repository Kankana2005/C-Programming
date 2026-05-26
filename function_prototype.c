#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void hello(char name[],int age);//function prototype
bool agecheck(int age)  ; 

int main(){
    hello("kankana",21);
    if(agecheck(23)){
        printf("you can work here");
    }
    else{
        printf("you cant");
    }
    return 0;
}

void hello(char name[],int age){
    printf("hello %s\n",name);
    printf("You are %d years old\n",age);
}

bool agecheck(int age){
    return age>=16;
}

