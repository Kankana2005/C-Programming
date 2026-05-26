#include<stdio.h>
#include<stdbool.h>

// bool agecheck(int age){
//     if(age >= 18){
//         return true;
//     }
//     else{
//         return false;
//     }
// }


// int square(int num){
//     int result = num*num;
//     return result;
// }


int getmax(int x,int y){
    if(x>=y){
        return x;
    }
    else{
        return y;
    }
}
int main(){

    // int x = square(2);
    // int y = square(3);
    // int z = square(4);
    // printf("%d\n",x);
    // printf("%d\n",y);
    // printf("%d\n",z);



    // int age = 21;

    // if(agecheck(age)){
    //     printf("you are an adult\n");
    // }
    // else{
    //     printf("you are a kid\n");
    // }


    int x = 2;
    int y = 3;
    printf("%d",getmax(x,y));
    return 0;
}