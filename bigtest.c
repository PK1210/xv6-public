// Test process taking time gracefully.
// Large executable.

#include "types.h"
#include "stat.h"
#include "user.h"

#define N  100000000000

// void
// printf(int fd, const char *s, ...)
// {
//   write(fd, s, strlen(s));
// }

int 
bigtest(void)
{
  int i;
  int count = 0;
  for(i=0;i<N;i++)
    count=i+1;
  if(count==N)
  {
    printf(1,"Big test passed\n");
    return 0;
  }
  else
  {
    printf(1,"Big test failed\n");
    return -1;
  }
}
int
main(void)
{
  bigtest();
  exit();
}
