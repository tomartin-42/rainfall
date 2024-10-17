#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *auth = NULL;
char *service = NULL;

int main(void) {

  char buff[128];

  do {
    printf("%p, %p \n", auth, service);
    if (!fgets(buff, 128, stdin)) {
      break;
    }
    if (!strncmp(buff, "auth ", 5)) {
      auth = malloc(4);
      auth[0] = 0;
      if (strlen(buff) >= 30) {
        strcpy(auth, buff + 5);
      }
    } else if (!strncmp(buff, "reset", 5)) {
      free(auth);
    } else if (!strncmp(buff, "service", 7)) {
      service = strdup(buff + 7);
    } else if (!strncmp(buff, "login", 5)) {
      if (auth[32] != 0) {
        system("/bin/sh");
      } else {
        fwrite("Pasword:\n", 10, 1, stdout);
      }
    }
  } while (1);
}
