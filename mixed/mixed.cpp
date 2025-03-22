#if defined(__APPLE__)
#define POSIX 1
#endif

#if defined(POSIX)
#include <unistd.h>
#include <termios.h>
#include <sys/ioctl.h>
#endif

class terminal {
public:
  terminal() = delete;
};

int main(int argc, char** argv) {
  return 0;
}
