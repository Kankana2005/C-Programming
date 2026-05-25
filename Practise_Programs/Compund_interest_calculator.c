#include<stdio.h>
#include<math.h>

int main(){
    double principle = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCoumpounded = 0;
    double total = 0.0;

    printf("Compund Interet calculator\n");
    
    printf("Enter the principle (p): ");
    scanf("%lf",&principle);

    printf("Enter the interest rate % (r): ");
    scanf("%lf",&rate);

    rate = rate/100;

    printf("Enter the number of years:(t) ");
    scanf("%d",&years);

    printf("Enter number of times compunded per year: (n) ");
    scanf("%d",&timesCoumpounded);

    total = principle* pow(1+rate/timesCoumpounded,timesCoumpounded*years);

    printf("After %d years the total will be $%.2lf",years,total);

    return 0;
}