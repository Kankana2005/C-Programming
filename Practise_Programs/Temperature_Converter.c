#include<stdio.h>
#include<math.h>
 
int main(){
    char choice = '\0';
    float Fahernheit = 0.0f;
    float celcius = 0.0f;

    printf("Temperature converter Program\n");
    printf("C. Celcius to Fahernheit\n");
    printf("F.Faherenheit to celcius\n");
    printf("Is the temp in C or F: ");
    scanf("%c",&choice);

    if(choice == 'C'){
        printf("Enter the temp in celcius: \n");
        scanf("%f",&celcius);
        Fahernheit = (celcius * 9/5) + 32;
        printf("%2.f celcius is eqal to %2.f fahereheit\n",celcius,Fahernheit);


    }
    else if(choice == 'F'){
        printf("Enter the temp in Fahrenheit: \n");
        scanf("%f",&Fahernheit);
        celcius = (Fahernheit-32)*5/9;
        printf("%2.f fahereihet is eqal to %2.f celcius\n",Fahernheit,celcius);

    }
    else{
        printf("Invalid choice\n");
    }
    return 0;
}