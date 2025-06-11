#include <stdio.h>

int main(){

    int n;
    int k;

    printf("Enter range: ");
    scanf("%d",&n);


    printf("Enter divisor: ");
    scanf("%d",&k);

    int count = 0;
    for(int i = 1;i <= n; i++){
        if(i % k == 0){
            count++;
        }
    }

    printf("%d",count);

}