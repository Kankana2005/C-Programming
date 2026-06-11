#include<stdio.h>

int main(){

    //write file

    FILE *pFile = fopen("output.txt","w");

    char text[] = "Booty Booty booo\n rocking everywhere";
    if(pFile == NULL){
        printf("Error opening file\n");
        return 1;
    }
    fprintf(pFile,"%s",text);
    printf("File was written successfully\n");

    fclose(pFile);

}