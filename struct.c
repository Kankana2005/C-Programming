#include<stdio.h>
#include<stdbool.h>
#include<string.h>


// typedef struct{
//     char name[50];
//     int age;
//     float gpa;
//     bool isFullTime;
    
// }Student;

// void printstudent(Student student);


typedef struct{
    char model[25];
    int year;
    int price;
}Car;

int main(){

    // Student student1 = {"kankana",30,2.5,true};
    // Student student2 = {"Ghosh",31,1.5,false};
    // Student student3 ={0};

    // strcpy(student3.name ,"Sandy");
    // student3.age = 24;
    // student3.gpa = 4.0;
    // student3.isFullTime = true;

    // printf("%s\n",student1.name);
    // printf("%d\n",student1.age);
    // printf("%.2f\n",student1.gpa);
    // printf("%s\n",(student1.isFullTime)? "Yes":"No");

    // printf("%s\n",student2.name);
    // printf("%d\n",student2.age);
    // printf("%.2f\n",student2.gpa);
    // printf("%s\n",(student2.isFullTime)? "Yes":"No");

    // printf("%s\n",student3.name);
    // printf("%d\n",student3.age);
    // printf("%.2f\n",student3.gpa);
    // printf("%s\n",(student3.isFullTime)? "Yes":"No");

    // printstudent(student1);
    // printstudent(student2);
    // printstudent(student3);



    // // array of structs

    Car cars[] = {{"Mustang",2025,32000},
                  {"Corvetter",2026,68000},
                    {"Challenger",2024,29000}};
    int number = sizeof(cars)/sizeof(cars[0]);

    for (int i = 0;i<number;i++){
        printf("%s %d $%d\n",cars[i].model,cars[i].year,cars[i].price);
    }

   


    return 0;
}

// void printstudent(Student student){
//     printf("Name: %s\n",student.name);
//     printf("Age: %d\n",student.age);
//     printf("gpa: %.2f\n",student.gpa);
//     printf("Full-time: %s\n",(student.isFullTime)? "Yes":"No");
//     printf("\n");
// }