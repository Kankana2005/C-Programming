#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int getcomputerChoice();
int getUserChoice();
int checkWinner(int userchoice,int computerchoice);

int main(){
    srand(time(NULL));

    char playAgain = 'y';

    while(playAgain=='y' || playAgain=='Y'){

        int rounds = 0;
        int userscore =0;
        int compscore = 0;

        printf("*** Rock Papers Scissors ***\n");
        printf("How many rounds do you want to play?: ");
        scanf("%d",&rounds);

        for(int i=1;i<=rounds;i++){
            printf("---Round %d---\n",i);

            int userchoice = getUserChoice();
            int compchoice = getcomputerChoice();

            switch(userchoice){
                case 1:
                    printf("You chose Rock\n");
                    break;
                case 2:
                    printf("You chose Paper\n");
                    break;
                case 3:
                    printf("You chose Scissors\n");
                    break; 
                default:
                    printf("Choose a suitable number\n");         
            }

            switch(compchoice){
                case 1:
                    printf("comp chose Rock\n");
                    break;
                case 2:
                    printf("comp chose Paper\n");
                    break;
                case 3:
                    printf("comp chose Scissors\n");
                    break;      
            }

            int result = checkWinner(userchoice,compchoice);
            if (result==1){
                userscore++;
            }
            else if(result==-1){
                compscore++;
            } 
            printf("Score- You: %d | Comp: %d\n",userscore,compscore);
       
            }
            printf("\n-----Final result-----\n");
            if(userscore>compscore){
                printf("You won!!!\n");
            }
            else if(compscore>userscore){
                printf("You lose\n");
            }
            else{
                printf("its a tie\n");

            }
            printf("Final score = You: %d | Computer: %d\n",userscore,compscore);
            printf("\n Do you want to play again?(y/n): ");
            scanf(" %c",&playAgain);

        }
        printf("\n Thanks for playing!\n");
        return 0;
    }



int getcomputerChoice(){
    return (rand()%3)+1;
}
int getUserChoice(){
    int choice = 0;
    do{
    printf("Choose and option\n");
    printf("1.Rock \n 2.Paper \n 3.Scissors\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    }while(choice<1||choice>3);
    return choice;
}

int checkWinner(int userchoice,int computerchoice){
    if(userchoice==computerchoice){
        printf("its a draw!!!\n");
        return 0;
    }
    else if((userchoice==1 && computerchoice ==3) || (userchoice==2 && computerchoice ==1)||(userchoice==3 && computerchoice ==2)){
        printf("You won this round!!!\n");
        return 1;
    }
    else{
        printf(" you lose this round\n");
        return -1;
    }
}


