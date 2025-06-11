#include <stdio.h>
int main(){
    int x;
    int d;

    printf("Enter the speed: ");
    scanf("%d",&x);

    printf("Enter the distance: ");
    scanf("%d",&d);

    int t = (d / x) + 1;
    printf("Time required: %d", t);

}