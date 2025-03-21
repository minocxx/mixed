#if defined(__APPLE__)
#define POSIX 1
#endif

#if defined(POSIX)
#include <unistd.h>
#include <termios.h>
#include <sys/ioctl.h>
#endif

int main(int argc, char** argv) {
  return 0;
}
