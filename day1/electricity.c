#include <stdio.h>

int main() {
  int u;
  float s = 0;

  printf("Enter the number of units: ");
  scanf("%d", &u);

  if (u <= 100) {
    s += u * 1.5;
    printf("₹%f", s);
  } else if (u > 100 && u <= 200) {
    s += 100 * 1.5;
    u -= 100;
    s += u * 2.5;
    printf("₹%f", s);
  } else {
    s += 100 * 1.5;
    u -= 100;
    s += 99 * 2.5;
    u -= 99;
    s += u * 3.5;
    printf("₹%f", s);
  }
}