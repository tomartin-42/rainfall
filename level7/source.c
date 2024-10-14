#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <time.h>

char c[68];

void m(void) { printf("%s - %d\n", c, (int)time(0)); }

int main(int argc, char **argv) {
  u_int32_t *a;
  u_int32_t *b;
  FILE *f;

  a = malloc(8);
  a[0] = 1;
  a[1] = (u_int32_t)malloc(8);
  b = malloc(8);
  b[0] = 1;
  b[1] = (u_int32_t)malloc(8);

  strcpy((char *)a[1], argv[1]);
  strcpy((char *)b[1], argv[2]);

  f = fopen("/home/user/level8/.pass", "r");
  fgets(c, 68, f);

  puts("~~");
}
