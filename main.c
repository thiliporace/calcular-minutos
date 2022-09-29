#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void XXX(int m) {
  int h;
  int h2;
  for (int i = 0; i < 2; i++) {
    if (m >= 60) {
      h = m / 60;
      h2 = (m - (60 * h));
      printf("%d horas", h);
      printf(" e %d minutos\n", h2);
      break;
    } else if (m < 60) {
      printf("Minutos: %d  \n", m);
      break;
    }
  }
  return;
}

int main() {
  int mnts;
  printf("Digite os minutos: \n");
  scanf("%d", &mnts);
  XXX(mnts);
}
