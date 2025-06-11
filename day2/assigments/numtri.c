#include <stdio.h>

int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);

    for(int i = 1;i <= n; i++){
        int j = i;
        int p = i;
        while (j > 0) {
            printf("%d ",p);
            j--;
        }
        printf("\n");
    }
}