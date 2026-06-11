#include<stdio.h>
#include<stdlib.h>

int main(){

    //realloc() = reallocation , realize previously allocated memory
    // realloc(ptr,bytes)

    int number = 0;
    printf("Enter the number of prices: ");
    scanf("%d",&number);

    float *prices = malloc(number * sizeof(float));
    if(prices == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    for(int i = 0;i<number;i++){
        printf("Enter price no. %d: ",i+1);
        scanf("%f",&prices[i]);
    }

    int newnum = 0;
    printf("Enter a new number of prices: ");
    scanf("%d",&newnum);

    float *temp = realloc(prices,newnum*sizeof(float));
    if(temp ==NULL){
        printf("Could not reallocated memeory\n");

    }
    else{
        prices = temp;
        temp = NULL;

        for(int i = number;i < newnum;i++){
            printf("enter price no.%d: ",i+1);
            scanf("%f",&prices[i]);
        }

        
        for(int i = 0;i<newnum;i++){
            printf("$%.2f ",prices[i]);
        
        }
    
    }


    


    free(prices);
    prices = NULL;


    return 0;
}
