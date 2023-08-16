#include <stdio.h>
int main() {
  double a, b, result;
  char op;
  printf("Enter the expression (a op b): ");
  scanf("%lf %c %lf", &a, &op, &b);
  switch (op) {
    case '+':
      result = a + b;
      break;
    case '-':
      result = a - b;
      break;
    case '*':
      result = a * b;
      break;
    case '/':
      if (b == 0) {
        printf("Error: Division by zero\n");
        return 1;
      }
      result = a / b;
      break;
    default:
      printf("Error: Invalid operator\n");
      return 1;
  }

  printf("%lf %c %lf = %lf\n", a, op, b, result);
  return 0;
}