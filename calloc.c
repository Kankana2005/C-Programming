#include<stdio.h>
#include<stdlib.h>

int main(){

    // calloc() = contaguous allocation.
    // allocates memory dynamically and sets all allocated bytes to 0
    // malloc(0 is faster but calloc() leads to less bugs
    // calloc (#,size)

    int number = 0;
    printf("Eter the number of players: ");
    scanf("%d",&number);

    int *scores = calloc(number ,sizeof(int));

    if( scores == NULL){
        printf("Memory allocation failed!");
        return 1;
    }

    for(int i =0;i<number;i++){
        printf("Ener score number %d: ",i+1);
        scanf("%d",&scores[i]);

    }

    for(int i=0;i<number;i++){
        printf("%d ",scores[i]);

    }

    
    free(scores);
    scores = NULL;

    return 0;
}
