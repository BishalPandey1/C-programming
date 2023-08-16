#include <stdio.h>
double cube(double x) {
  return x * x * x;
}
int main() {
  double n;
  printf("Enter a number: ");
  scanf("%lf", &n);
  printf("The cube of %lf is %lf\n", n, cube(n));
  return 0;
}