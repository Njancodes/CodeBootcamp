#include <stdio.h>

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int tmp = n;
    while(n > 9){
        int sum = 0;
        while(tmp > 0){
            sum += tmp % 10;
            tmp /= 10;
        }
        n = sum;
        tmp = sum;
    }
    printf("Final single digit: %d",n);
}