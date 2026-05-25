#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    char operation = '\0';
    float x = 0.0f;
    float y = 0.0f;
    float total = 0.0f;
    printf("Enter the operation u want to perform: +,-,*,/: ");
    scanf("%c",&operation);

    switch(operation){
        case '+':
            printf("Enter the first number: ");
            scanf("%f",&x);
            printf("enter the second number: ");
            scanf("%f",&y);
            total = x+y;
            printf("%.2f+%.2f= %.2f",x,y,total);
            break;
        case '-':
            printf("Enter the first number: ");
            scanf("%f",&x);
            printf("enter the second number: ");
            scanf("%f",&y);
            total = x-y;
            printf("%.2f-%.2f= %.2f",x,y,total);
            break;
        case '*':
            printf("Enter the first number: ");
            scanf("%f",&x);
            printf("enter the second number: ");
            scanf("%f",&y);
            total = x*y;
            printf("%.2f*%.2f= %.2f",x,y,total);
            break;
        case '/':
            printf("Enter the first number: ");
            scanf("%f",&x);
            printf("enter the second number: ");
            scanf("%f",&y);
            total = x/y;
            printf("%.2f/%.2f= %.2f",x,y,total);
            break;            
    }

    return 0;
}