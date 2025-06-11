#include <stdio.h>

int main(){
    int n;
    printf("Enter the amount of numbers: ");
    scanf("%d",&n);
    int arr[n];

    for(int i = 0; i < n; i++){
        printf("Enter the number at pos %d: ",i);
        scanf("%d", &arr[i]);
    }

    int l = arr[0];
    int sl = arr[1];

    for(int i = 0; i < n; i++){
        if(arr[i] > l){
            sl = l;
            l = arr[i];
        }else if(arr[i] < l && arr[i] > sl){
            sl = arr[i];
        }
    }
    printf("The second largest element is: %d",sl);


}