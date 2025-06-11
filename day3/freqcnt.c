#include <stdio.h>

int main() {
  int n;
  printf("Enter the amount of numbers: ");
  scanf("%d", &n);
  int arr[n];

  for (int i = 0; i < n; i++) {
    printf("Enter the number at pos %d: ", i);
    scanf("%d", &arr[i]);
  }

  int visited[n];

  for(int i = 0; i < n; i++){
    visited[i] = 0;
    for(int j = 0; j < n; j++){
        if(arr[i] == arr[j]){
            visited[i] += 1;
        }
    }
  }

  for(int i = 0; i < n; i++){
    printf("%d : %d\n", arr[i],visited[i]);
  }
}