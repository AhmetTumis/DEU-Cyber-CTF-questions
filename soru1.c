#include <stdio.h>
#include <string.h>
int main(){
    //hebele hübele
    char string1[] = "yes you're";
    char string2[] = "";
    int isItTho = 0;
    printf("Am I cool enough to be like you? ");
    scanf("%s", &string2);
    isItTho = strcmp(string2, string1);
    if(isItTho == 0){
        printf("Cool, here's your access code:\n");
        printf("penguinsArentReal666");}
    else{printf("-_- no!");};}