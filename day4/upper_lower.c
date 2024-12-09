#include<stdio.h>
int main(){
    int inputChar;
    printf("Enter a Character;\n");
    scanf("%c",&inputChar);
    if(inputChar>65 && inputChar<=90){
        printf("The given Character is upper case letter");
    }
    else{
        printf("The given Character is lower case letter");
    }
}