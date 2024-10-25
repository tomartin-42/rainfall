#include <cstring>
#include <unistd.h>

class N {
  int n;
  char str[100];

public:
  N(int num) { n = num; } // Constructor
  int operator+(N &obj) { return n + obj.n; }
  int operator-(N &obj) { return n - obj.n; }
  void setAnnotation(char *s) {
    size_t len;
    len = strlen(s);
    memcpy(this->str, s, len);
  }
};

int main(int argc, char **argv) {
  if (argc < 2) {
    _exit(1);
  }

  N *obj_1 = new N(5);
  N *obj_2 = new N(6);

  obj_1->setAnnotation(argv[1]);

  obj_2->operator+(*obj_1);
}
