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
  printf("Enter the number of rows: ");
  checkValidInput(scanf("%d", &n),"Enter a valid number please");

  if(n <= 0){
    printf("Enter a number greater than 0, please");
    return 1;
  }

  //* * * *
  //* * * *
  //* * * *
  //* * * *

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      printf("* ");
    }
    printf("\n");
  }

  printf("\n");

  //*
  //* *
  //* * *
  //* * * *

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      printf("* ");
    }
    printf("\n");
  }

  printf("\n");

  //      *
  //    * *
  //  * * *
  //* * * *

  int sp = n - 1;
  for (int i = 1; i <= n; i++) {
    for (int i = 1; i <= sp; i++) {
      printf("  ");
    }
    for (int j = 1; j <= i; j++) {
      printf("* ");
    }
    printf("\n");
    sp--;
  }

  printf("\n");


  //* * * *
  //* * *
  //* *
  //*


  for (int i = n; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      printf("* ");
    }
    printf("\n");
  }

  printf("\n");

  //* * * *
  //  * * *
  //    * *
  //      *

  sp = 0;
  for (int i = n; i >= 1; i--) {
    for (int i = 1; i <= sp; i++) {
      printf("  ");
    }
    for(int j = 1; j <= i; j++){
        printf("* ");
    }
    printf("\n");
    
    if(sp+1<n){
        sp++;
    }
  }
  return 0;
}