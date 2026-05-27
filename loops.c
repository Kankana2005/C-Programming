#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<windows.h>
int main(){

    // while(1==1){
    //     printf("hellooo wassuppp!!!");
    // } 
    // //ininite loop


    // int number = 1;
    // do{
    //     printf("Enter a number greater than 0: ");
    //     scanf("%d",&number);
    // }while(number <=0 );



    // char name[50] = "";
    // printf("Enter your name: ");
    // fgets(name,sizeof(name),stdin);
    // name[strlen(name)-1] = '\0';

    // while(strlen(name)==0){
    //     printf("name cannot be empty pls enter ur name: \n");
    //     fgets(name,sizeof(name),stdin);
    //     name[strlen(name)-1] = '\0';

    // }
    // printf("hello %s",name);



    // bool isRunning = true;
    // char response = '\0';

    // while(isRunning){
    //     printf("You are playing a game\n");
    //     printf("would you like to continue (Y=yes),N=no: \n");
    //     scanf(" %c",&response);

    //     if(response != 'Y' && response!= 'y'){
    //         isRunning = false;


    //     }
     
    // }
    // printf("You exit the game");  



    //// for loop
    // for(int i = 1;i<=10;i++){
    //     printf("%d\n",i);

    // }


    // for(int i=10;i>=0;i--){
    //     Sleep(1000);
    //     printf("%d\n",i);
    // }
    // printf("Happy new year");



    // // break and continue
    // for(int i =1;i<=10;i++){
    //     if(i==4){
    //         // break;
    //         continue;

    //     }
    //     printf("%d\n",i);
    // }




    // //nested loops
    // for(int i=1;i<4;i++){
    //     for(int j=1;j<10;j++){
    //     printf("%d ",j);
    // }
    // printf("\n");

    // }

    
    // // multiplication table
    // for(int i=1;i<=10;i++){
    //     for(int j=1;j<=10;j++){
    //     printf("%3d ",i*j);
    //     }
    //     printf("\n");
    // }

    //example 3
    int rows = 0;
    int cols = 0;
    char symbol ='\0';
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    printf("Enter the number of cols: ");
    scanf("%d",&cols);
    printf("Enter the character: ");
    scanf(" %c",&symbol);

    for(int i =0;i<rows;i++){
        for(int j = 0;j<cols;j++){
        printf("%c",symbol);
        }
        printf("\n");
    }






    return 0;
}