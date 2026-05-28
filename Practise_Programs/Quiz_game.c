#include<stdio.h>
#include<ctype.h>

int main(){

    char questions[][100] ={"What is the largest planet in the solar system?",
                            "What is the hottest planet?",
                            "What planet has the most moons?",
                            "Is earth earth flat?"};
    char options[][100] = {"A.Jupiter\nB. Saturn\n C. Uranus\n D.Neptune",
                        "A. Mercury\n B.Venus\n C.Earth\n D. Mars",
                        "A.Earth\n B.Mars\n C.Jupiter\n D.Saturn",
                        "A.Yes\n B.No\nC. Maybe\n D. Sometimes"};
    char answerKey[] ={'A','B','D','B'};

    int questioncount = sizeof(questions) / sizeof(questions[0]);
    char guess = '\0';
    int score = 0;

    printf("***Quiz game***");
    for(int i=0;i<questioncount;i++){
        printf("\n%s\n",questions[i]);
        printf("\n%s\n",options[i]);
        printf("\nEnter your ans: ");
        scanf(" %c",&guess);

        guess = toupper(guess);
        
        if(guess == answerKey[i]){
            printf("Correct!!\n");
            score++;
        }
        else{
            printf("Wrong\n");
        }

    }
    printf("\n Your score is %d out of %d points \n",score,questioncount);
    
    return 0;
}