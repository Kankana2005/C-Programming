#include<stdio.h>
#include<stdlib.h>
int main(){
    int num = 0;
    printf("Enter the number of grades : ");
    scanf("%d",&num);
    char *grades = malloc(num *sizeof(char));
    

    if(grades == NULL){
        printf("Memorey allocation failed\n");
        return 1;
    }
    for (int i = 0;i<num; i++){
        printf("Enter grade no. %d: ", i+1);
        scanf(" %c",&grades[i]);
    }
    for(int i =0 ; i < num ;i++){
        printf("%c ",grades[i]);
    }
    free(grades);
    grades = NULL; // avoids dangling pointers

    return 0;


}