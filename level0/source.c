#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv) {
  int num;
  char **shell;
  int uid;
  int gid;

  num = atoi(argv[1]);
  if (num == 0x1a7) {
    shell[0] = strdup("/bin/sh");
    shell[1] = NULL;
    gid = getegid();
    uid = geteuid();
    setresgid(gid, gid, gid);
    setresuid(uid, uid, uid);
    execv("/bin/sh", shell);
  } else {
    fwrite("No !\n", 1, 5, stderr);
  }
  return (0);
}
