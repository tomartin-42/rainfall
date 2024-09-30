#include <stdio.h> //for gets
                   //but gets function is remove from c by extremely unsafe
#include <stdlib.h>

void run(void) {
  fwrite("Good... Wait what?\n", 1, 0x13, stdout);
  system("/bin/sh");
}

int main(void) {
  char buff[76];

  gets(buff);
  return (0);
}
