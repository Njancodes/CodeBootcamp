#include <stdio.h>

int main(){
    int n;
    printf("Enter the amount of numbers: ");
    scanf("%d",&n);
    int arr[n];

    int c = 0;
    for(int i = 0; i < n; i++){
        printf("Enter the number at pos %d: ",i);
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0){
            c++;
        }
    }

    printf("The count of even numbers is: %d",c);

}