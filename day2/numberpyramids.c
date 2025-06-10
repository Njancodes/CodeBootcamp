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
  checkValidInput(scanf("%d", &n),"Enter a valid input please.");

  if(n <= 0){
    printf("Enter a number greater than 0, please");
    return 1;
  }

  //1
  //1 2
  //1 2 3
  //1 2 3 4

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%d ", j);
    }
    printf("\n");
  }

  printf("\n");

  //      1
  //    1 2
  //  1 2 3
  //1 2 3 4

  int sp = n - 1;
  for (int i = 1; i <= n; i++) {
    for (int i = 1; i <= sp; i++) {
      printf("  ");
    }
    for (int j = 1; j <= i; j++) {
      printf("%d ", j);
    }
    printf("\n");
    sp--;
  }

  printf("\n");

  //1 2 3 4
  //1 2 3
  //1 2
  //1

  for (int i = n; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      printf("%d ",j);
    }
    printf("\n");
  }

  printf("\n");

  //1 2 3 4
  //  1 2 3
  //    1 2
  //      1

  sp = 0;
  for (int i = n; i >= 1; i--) {
    for (int i = 1; i <= sp; i++) {
      printf("  ");
    }
    for(int j = 1; j <= i; j++){
        printf("%d ",j);
    }
    printf("\n");
    
    if(sp+1<n){
        sp++;
    }
  }

  printf("\n");

  //1 2 3 4
  //  2 3 4
  //    3 4
  //      4

  sp = 0;
  for (int i = n; i >= 1; i--) {
    for (int i = 1; i <= sp; i++) {
      printf("  ");
    }
    for(int j = (n - i) + 1; j <= n; j++){
        printf("%d ",j);
    }
    printf("\n");
    
    if(sp+1<n){
        sp++;
    }
  }

}