#include <stdio.h>
#include <stdlib.h>

int m = 0;

void v(void) {
  char buff[520];

  fgets(buff, 0x200, stdin);
  printf(buff);
  if (m == 0x40) {
    fwrite("Wait what?!\n", 1, 0xc, stdout);
    system("/bin/sh");
  }
  return;
}

int main(void) {
  v();
  return (0);
}
