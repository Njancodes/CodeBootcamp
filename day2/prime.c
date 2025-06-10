#include <math.h>
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
    printf("Enter the number: ");
    checkValidInput(scanf("%d",&n),"Enter a valid number please");

    if(n < 2){
        printf("Neither a prime nor a composite");
        return 1;
    }

    int flg = 0;
    int srt = (int)sqrt((double)n);

    for(int i = 2; i <= srt; i++){
        if(n % i == 0){
            flg = 1;
            break;
        }
    }

    if(flg == 1){
        printf("Not a prime number.");
    }else{
        printf("A prime number.");
    }

}