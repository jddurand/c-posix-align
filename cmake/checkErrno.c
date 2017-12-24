#include <errno.h>
#include <stdio.h>

int main() {
  printf("%d", CHECKERRNO);
  exit(0);
}
