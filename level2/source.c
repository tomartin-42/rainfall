#include <stdio.h>
#include <string.h>
#include <unistd.h>

void p(void) {
  void *unaff_retaddr;
  char buff[76];

  fflush(stdout);
  gets(buff);
  unaff_retaddr = __builtin_return_address(0); // Get return address from stack
  if (((unsigned long int)unaff_retaddr & 0xb0000000) == 0xb0000000) {
    printf("(%p)\n", unaff_retaddr);
    _exit(1);
  }
  puts(buff);
  strdup(buff);
  return;
}

int main(void) {
  p();
  return (0);
}
