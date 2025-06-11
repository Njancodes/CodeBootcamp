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

  int r = n - 1;

  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n");

  for (int i = n - 1; i > -1; i--) {
    printf("%d ", arr[i]);
  }

}