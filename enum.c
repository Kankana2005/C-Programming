#include<stdio.h>

// typedef enum {
//     Sunday = 1,Monday=2,Tuesday=3,Wednesday=4,Thursday=5,Friday=6,Saturday=7
// } Day;

typedef enum{
    success,failure,pending
} status;

void connectstatus(status stat);

int main(){

    // Day today = Monday;
    // if(today == Sunday || today== Saturday){
    //     printf("Its a weekend\n");
    // }
    // else{
    //     printf("its a weekday");
    // }

    status stat = success;
    connectstatus(stat);
    return 0;
}

void connectstatus(status stat){

switch(stat){
            case success:
                printf("Connection was successfull\n");
                break;
            case failure :
                printf("Could not connect\n");
                break;
            case pending:
                printf("connnecting...\n");
                break;         
        }
    }

