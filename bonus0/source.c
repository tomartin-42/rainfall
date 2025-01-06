#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *p(char *str, char *s) {
  char buff[0x1000];

  puts(s);
  read(0, buff, 0x1000);
  char *aux = strchr(buff, '\n');
  *aux = 0;
  strncpy(str, buff, 0x14);
  return str;
}

char *pp(char *dest) {
  char str1[20];
  char str2[20];
  unsigned int len;

  p(str1, " - ");
  p(str2, " - ");

  strcpy(dest, str1);

  len = strlen(dest);

  dest[len] = ' ';
  dest[len + 1] = 0;

  strcat(dest, str2);

  return dest;
}

int main(int argc, char **argv) {

  char buff[42];

  pp(buff);
  puts(buff);

  return 0;
}
