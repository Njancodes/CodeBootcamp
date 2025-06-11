#include <stdio.h>

int main(){
    int n;
    printf("Enter the amount of numbers: ");
    scanf("%d",&n);
    int arr[n];

    int sum = 0;
    for(int i = 0; i < n; i++){
        printf("Enter the number at pos %d: ",i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum: %d",sum);
}