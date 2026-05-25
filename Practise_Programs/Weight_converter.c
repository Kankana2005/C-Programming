#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){

    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("Weight Converter Calculator\n");
    printf("1.Kilogram to pounds\n");
    printf("2.Pounds to Kilograms\n");
    printf("Enter your choice between 1 and 2: ");
    scanf("%d",&choice);

    if(choice == 1){
        printf("Enter the weight in kilograms: ");
        scanf("%f",&kilograms);
        pounds = kilograms *2.20462;
        printf("%.4f kilograms is %.4f pounds: ",kilograms,pounds);
    }
    else if (choice == 2){
        printf("Enter the weight in pounds\n ");
        scanf("%f",&pounds);
        kilograms = pounds /2.20462;
        printf("%.4f pounds is %.4f kilograms\n ",pounds,kilograms);

    }
    else{
        printf("Invalid choice ! please enter 1 or 2\n");
    }

    return 0;
}