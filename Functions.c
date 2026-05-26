#include<stdio.h>
#include<string.h>

void happybirthday(char name[],int age){
    printf("\n happy birthday to you!!");
    printf("\n happy birthday to you!!");
    printf("\n May god bless youu!!");
    printf("\n happy birthday to you!!");
    printf("\n happy birthday to you dearr %s!!",name);
    printf("\n many greetings to u, you are %d years old!!",age);
}
int main(){

    // char name[] = "kankana";
    // int age = 25;

    char name[50] ="";
    int age = 0;

    printf("enter your name: ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1] = '\0';

    printf("Enter your age: ");
    scanf("%d",&age);

    happybirthday(name,age);


    // happybirthday(name,age);
    // happybirthday(name,age);

    return 0;
}