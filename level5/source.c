#include <stdio.h>
#include <stdlib.h>

void o(void) {
  system("/bin/sh");
  exit(1);
}

void n(void) {
  char buff[520];

  fgets(buff, 520, stdin);
  printf(buff);
}

int main(void) {
  n();
  return (1);
}
