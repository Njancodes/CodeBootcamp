#include <stdio.h>


int main(){
    int n;
    int tmp;
    printf("Enter number: ");
    scanf("%d",&n);

    int prod = 1;
    tmp = n;

    while (n > 0) {
        prod*=n;
        n--;
    }

    printf("Factorial of %d is %d", tmp, prod);
}