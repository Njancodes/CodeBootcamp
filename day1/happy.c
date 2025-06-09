#include <stdio.h>
#include <stdlib.h>

void checkValidInput(int out, char msg[]){
    if(out != 1){
        printf("%s",msg);
        exit(1);
    }
}

int main() {
  int n;

  printf("Enter a number: ");

  checkValidInput(scanf("%d",&n),"Enter a valid a number");
  int sum = n, x = n;

  while (sum > 9) {
    sum = 0;

    while (x > 0) {
      int d = x % 10;
      sum += d * d;
      x /= 10;
    }
    x = sum;
  }
  if (sum == 7 || sum == 1)
    printf("%d is a Happy number", n);
  else
    printf("%d is not a Happy number", n);
  return 0;
}
