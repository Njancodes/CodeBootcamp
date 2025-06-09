#include <stdio.h>
#include <stdlib.h>

void checkValidInput(int out, char msg[]){
    if(out != 1){
        printf("%s",msg);
        exit(1);
    }
}

int leapyr(int y) {
  if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
    return 1;
  }
  return 0;
}

int main() {
  int m, y;

  printf("Enter the month (1-12): ");
  checkValidInput(scanf("%d", &m), "Enter a proper month number please");
  printf("Enter a year: ");
  checkValidInput(scanf("%d", &y),"Enter a proper year please");

  if (m < 7 && m % 2 == 0) {
    if (m == 2) {
      if (leapyr(y) == 1) {
        printf("29 days");
      } else {
        printf("28 days");
      }
    } else {
      printf("30 days");
    }
  } else if (m <= 7 && m % 2 != 0) {
    printf("31 days");
  }else if(m % 2 == 0) {
    printf("31 days");
  }else{
    printf("30 days");
  }
}