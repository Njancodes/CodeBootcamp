#include <stdio.h>

int main(){
    int n;
    int sum = 0;
    int c = 0;
    while (sum <= 500) {
        printf("Enter number: ");
        scanf("%d",&n);

        sum += n;
        c++;
    }
    printf("Total sum exceeded 500.\n");
    printf("Numbers entered: %d", c);
}