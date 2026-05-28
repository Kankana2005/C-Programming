#include<stdio.h>
#include<stdbool.h>

int main(){

    // int x = 5;
    // int y = 6;
    // int max = (x>y)? x: y;
    // printf("%d",max);

    // bool isOnline = true;
    // printf("%s",(isOnline)? "online":"Offline");

    // int num = 8;
    // printf("%d is %s",num,(num%2 == 0)? "even":"false" );

    // int age = 24;
    // printf("%s",(age>18)? "adult":"child");

    int hours = 11;
    int mins = 3;
    char *meridiam = (hours<12)? "AM":"PM";

    printf("%02d:%02d %s",hours,mins,meridiam);
    
    return 0;
}