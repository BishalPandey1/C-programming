#include <stdio.h>
int main() {
  int arr[10];
  int max = -2147483648;
  int i = 0;
  printf("Enter 10 numbers: ");
  for (i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < 10; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  printf("The greatest among 10 numbers is %d\n", max);
  return 0;
}