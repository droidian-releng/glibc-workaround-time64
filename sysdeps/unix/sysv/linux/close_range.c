#include <errno.h>
#include <not-cancel.h>

int
__close_range (unsigned int lowfd, unsigned int highfd, int flags)
{
  __set_errno (ENOSYS);
  return -1;
}
libc_hidden_def (__close_range)
strong_alias (__close_range, close_range)
