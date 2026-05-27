#include<stdio.h>
#include<string.h>
 int main(){

    // int numbers[] = {10,20,30,40,50,60,80}; 
    // char grades[] = {'A','B','C','D','E'};

    // numbers[0] = 100;
    // numbers[1] = 200;
    // numbers[2] = 300;


    // printf("%d\n",numbers[0]);
    // printf("%d\n",numbers[1]);
    // printf("%d\n",numbers[2]);
    // printf("%c\n",grades[1]);

    // printf("%d\n",sizeof(numbers));
    // printf("%d\n",sizeof(numbers[0]));

    // int size = sizeof(numbers) / sizeof(numbers[0]);

    // for(int i = 0;i<size;i++){
    //     printf("%d ",numbers[i]);
    // }


    // // arrays user inputs

    // int scores[5] = {0};

    // for(int i=0;i<5;i++){
    //      printf("Enter score: ");
    //      scanf("%d",&scores[i]);
    // }

    // for(int i = 0; i<5;i++){
    //     printf("%d\n",scores[i]);
    // }



    // // 2D arrays

    // int numbers[][3] = {{1,2,3},
    //                     {3,4,5},
    //                     {7,8,9}};

    // // printf("%d ",numbers[0][0]);  
    // // printf("%d ",numbers[0][1]); 
    
    // for(int i =0;i<3;i++){
    //     for(int j = 0;j<3;j++){
    //         printf("%d ",numbers[i][j]);
    //     }
    //     printf("\n");
    // }

    // char numpad[][3] ={{'1','2','3'},
    //                     {'4','5','6'},
    //                     {'7','8','9'},
    //                     {'*','0','#'}};
    // for (int i=0;i<4;i++){
    //     for(int j=0;j<3;j++){
    //         printf("%c ",numpad[i][j]);
    //     }
    //     printf("\n");
    // }   
    
    

    // array of strings

    // char fruits[][10] = {"Apple",
    //                     "Banana",
    //                     "Cocount",
    //                     "mango"};
    // int size = sizeof(fruits) /sizeof(fruits[0]);
    // fruits[0][0] = 'e';
    // fruits[0][4] = 'A';

    // fruits[2][0] = 'c';
    // fruits[3][4] = 'B';

    // fruits[1][1] = 'm';
    // fruits[2][4] = 's';

    // for(int i =0;i<size;i++){
    //     printf("%s ",fruits[i]);
    // }


    // // Exercise
    char names[4][25] = {0};
    int rows = sizeof(names)/sizeof(names[0]);

       for(int i =0;i<rows;i++){
         printf("Enter a name: ");
        fgets(names[i],sizeof(names[i]),stdin);
        names[i][strlen(names[i])-1] = '\0';

    }

    for (int i =0 ; i<rows;i++){
        printf("%s\n",names[i]);
    }

    return 0;
 }