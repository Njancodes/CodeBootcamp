#include <stdio.h>
#include <stdlib.h>

void checkValidInput(int out, char msg[]){
    if(out != 1){
        printf("%s",msg);
        exit(1);
    }
}

int main(){
    int n;
    printf("Enter a number: ");
    checkValidInput(scanf("%d",&n),"Enter a valid number please");

    while(n != 0){
        printf("%d",n%10);
        n /= 10;
    }

}