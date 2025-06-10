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
    printf("Enter the number of terms: ");
    checkValidInput(scanf("%d",&n),"Enter a valid input");

    int n1 = 0;
    int n2 = 1;

    for(int i = 0;i < n; i++){
        printf("%d ",n1);
        int temp = n1;
        n1 = n2;
        n2 += temp;
    }


}