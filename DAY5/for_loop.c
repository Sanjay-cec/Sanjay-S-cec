

#include<stdio.h>
int main(){
    
    printf("inside\n");
    for(int i=0;i<=4;i++){
        printf("%d \n",i);
    }

    printf("outside: \n");
    int j=0;
    for(j=0;j<=4;j++){
        printf("%d \n",j);
    }
}