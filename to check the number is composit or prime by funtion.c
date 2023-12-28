#include <stdio.h>
#include <math.h>
int is_prime(int n) {
  if (n < 2) {
    return 0;
  }
  if (n == 2 || n == 3) {
    return 1;
  }
  if (n % 2 == 0 || n % 3 == 0) {
    return 0;
  }
  int limit = sqrt(n);
  for (int i = 5; i <= limit; i += 2) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}
int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  if (is_prime(num)) {
    printf("%d is a prime number.\n", num);
  } else {
    printf("%d is a composite number.\n", num);
  }
  return 0;
}