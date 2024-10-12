#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void n(void) { system("/bin/cat /home/user/level7/.pass"); }

void m(void) { puts("Nope"); }

int main(int argc, char **argv) {
  char *arg;
  void (**f_ptr)(void);

  arg = (char *)malloc(64);
  f_ptr = (void (**)(void))malloc(4);
  *f_ptr = m;
  strcpy(arg, argv[1]);
  (*f_ptr)();

  return (0);
}
