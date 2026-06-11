#include<stdio.h>
 int main(){
    FILE *pfile = fopen("input.txt","r");
    char buffer[1024] = {0};

    if(pfile == NULL){
        printf("Could not open file\n");
        return 1;
    }
    while(fgets(buffer,sizeof(buffer),pfile) != NULL){
        printf("%s",buffer);
    }

    fclose(pfile);

    return 0;
 }