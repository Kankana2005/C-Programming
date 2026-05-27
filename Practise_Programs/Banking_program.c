#include<stdio.h>

void checkbalance(float balance);
float deposit();
float withdraw(float balance);

int main(){
    int choice = 0;
    float balance = 0.0f;

    printf("Welcome to the bank\n");
    do{
        printf("\nSelect an option\n");
        printf("\n1. Check balance:\n");
        printf("\n2. Deposit Money:\n");
        printf("\n3. Withdraw Money:\n");
        printf("\n4. Exit\n");
        printf("\n Enter your choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                checkbalance(balance);
                break;
            
            case 2:
                balance += deposit();
                break;
            
            case 3:
                balance -= withdraw(balance);
                break;

            case 4:
                printf("\nThank you\n") ;
                break;
                
            default:
                printf("\nInvalid choice, please select between 1-4\n");            
        }
    }while(choice !=4);
    return 0;
}

void checkbalance(float balance){
    printf("\n Your current balance is : $%.2f\n",balance);
}

float deposit(){
    float amt = 0.0f;

    printf("\nEnter the amt to deposit: $");
    scanf("%f",&amt);
    if(amt<0){
        printf("Invalid amt\n");
        return 0.0f;
    }
    else{
        printf("Successfully deposited $%.2f\n",amt);
        return amt;
    }

}

float withdraw(float balance){
    float amt = 0.0f;
    printf("\n enter the amt you want to withdraw: $");
    scanf("%f",&amt);
    if(amt<0){
        printf("Invalid amt\n");
        return 0.0f;
    }
    else if(amt>balance){
        printf("Insufficient balance!! Your balance is $%.2f\n",balance);
        return 0.0f;
    }
    else{
        printf("Sucessfully withdrew $%.2f\n",amt);
        return amt;
    }

}
