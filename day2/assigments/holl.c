#include <stdio.h>

int main(){
    int n;
    printf("Enter side length: ");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++){
        if(i == 1 || i == n){
            for(int i = 0; i < n; i++){
                printf("* ");
            }
        }else{
            printf("*");
            int k = n + (n - 3);
            for (int i = 0; i < k; i++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

}