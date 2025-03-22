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

  static int read_buf(char* buf, int len) {
    return 0;
  }

  static int write_buf(const char* buf, int len) {
    return 0;
  }
};

int main(int argc, char** argv) {
  return 0;
}
