#include <stdio.h>
int gcd(int a, int b) {
  if (a == 0) return b;
  if (b == 0) return a;
  while (a != b) {
    if (a > b) a = a - b;
    else b = b - a;
  }
  return a;
}
int main() {
  int x, y;
  printf("Enter two numbers: ");
  scanf("%d %d", &x, &y);
  printf("The GCD of %d and %d is %d\n", x, y, gcd(x, y));
  return 0;
}