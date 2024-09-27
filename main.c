#include <stdio.h>

int main(void) {
  double number, result;
  int qty = 0;
  
  printf("Digite um número qualquer: ");
    scanf("%lf",&number);
    result = number;

  do {
      result = result/2;
      qty = qty + 1;
  } while (result >=1);

  printf("Result of the last division: %g\n", result);
  printf("Number of divisions: %d", qty);
  return 0;
}
