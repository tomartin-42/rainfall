// /tmp/getenv.c

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) { printf("%p\n", getenv(argv[1])); }
