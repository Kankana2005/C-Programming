#include<stdio.h>

int main(){
    int day = 0;
    printf("Enter the day of the week: ");
    scanf("%d",&day);
    switch(day){
        case 1:
            printf("Its Sunday");
            break;
        case 2:
            printf("Its Monday");
            break;
        case 3:
            printf("Its tuesday");
            break;
        case 4:
            printf("Its wednesday");
            break;
        case 5:
            printf("Its Thursday");
            break;
        case 6:
            printf("Its Friday");
            break;
        case 7:
            printf("Its Saturday");
            break;   
        default:
            printf("Invalid case") ;                        

    }

    return 0;
}