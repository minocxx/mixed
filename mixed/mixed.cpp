#if defined(__APPLE__)
#define POSIX 1
#endif

#if defined(POSIX)
#include <unistd.h>
#include <termios.h>
#include <sys/ioctl.h>
#endif

#include <string>
#include <string_view>
#include <vector>

class terminal {
public:
  terminal() = delete;

  static bool enable_raw_mode() {
#if defined(POSIX)
#endif
    return false;
  }

  static bool disable_raw_mode() {
#if defined(POSIX)
#endif
    return false;
  }

  static int read_buf(char* buf, int len) {
#if defined(POSIX)
#define read ::read
    return read(STDIN_FILENO, buf, len);
#undef read
#endif
    return 0;
  }

  static int write_buf(const char* buf, int len) {
#if defined(POSIX)
#define write ::write
    return write(STDOUT_FILENO, buf, len);
#undef write
#endif
    return 0;
  }

  static int write(std::string_view sv) {
    return write_buf(sv.data(), sv.size());
  }

  static int write(int value) {
    return write(std::to_string(value));
  }

  static int write(std::nullptr_t) = delete;
};

class editor {
public:
};

int main(int argc, char** argv) {
  return 0;
}
