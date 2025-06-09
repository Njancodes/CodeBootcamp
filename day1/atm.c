#include <stdio.h>
#include <stdlib.h>

void checkValidInput(int out, char msg[]){
    if(out != 1){
        printf("%s",msg);
        exit(1);
    }
}

int main(){
    int b, w, c = 1;

    printf("Enter the balance: ");
    checkValidInput(scanf("%d",&b), "Enter a valid number please");

    while (c == 1){
        printf("How much do you want to withdraw: ");
        checkValidInput(scanf("%d",&w), "Enter a valid number please");

        if(w%100 == 0){
            if(b - w >= 500){
                b = b - w;
                printf("The balance is %d\n",b);
            }else{
                printf("Insufficient balance. Minimum 500 must remain after withdrawal.\n");
            }
        }else{
            printf("Withdraw amount must be a multiple of 100.\n");
        }
        printf("Do you want to withdraw more (0/1): ");
        checkValidInput(scanf("%d",&c),"Enter a 0 or 1 please");
    }
}