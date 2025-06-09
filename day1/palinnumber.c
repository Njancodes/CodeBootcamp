#include <stdio.h>
#include <stdlib.h>

void checkValidInput(int out, char msg[]){
    if(out != 1){
        printf("%s",msg);
        exit(1);
    }
}

int power(int b, int e) {
  int prod = 1;
  for (int i = 0; i < e; i++) {
    prod *= b;
  }
  return prod;
}

int main() {
  int n;
  printf("Enter a number: ");
  checkValidInput(scanf("%d", &n),"Enter a valid number please");
  int pn = n;
  int temp = pn;
  int d = 0;
  while (temp != 0) {
    d += 1;
    temp /= 10;
  }
  int rev = 0;
  for (int i = 0; i < d; i++) {
    rev += (pn % 10) * power(10, i);
    pn /= 10;
  }
  if(rev == n){
    printf("Palindrom number");
  }else{
    printf("Not a palindrome number");
  }
}