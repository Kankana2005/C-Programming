#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));

    // printf("%d",rand());
    // printf("%d",RAND_MAX);

    // int min = 1;
    // int max = 6;
    // int randmnum = (rand()%max)+min;
    // printf("%d",randmnum);

    int min = 50;
    int max = 100;

    int randomnum = (rand()%(max-min+1))+min;
    int randomnum1 = (rand()%(max-min+1))+min;
    int randomnum2= (rand()%(max-min+1))+min;
    printf("%d %d %d",randomnum,randomnum1,randomnum2);
    return 0;
}
