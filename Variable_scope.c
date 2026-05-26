#include<stdio.h>

int result = 0; //global variables
int add(int x,int y){
    int result =x+y; // local
    return result;
}
int main(){
    int result = add(3,4);
    printf("%d",result);
}
