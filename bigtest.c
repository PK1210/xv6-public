// Test process taking time gracefully.
// Large executable.

#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

#define N  500009

int 
bigtest(void)
{
  int i,j;
  int count = 0;
  int step = getpid();
  for(i=0;i<N;i+=step)
    for(j=0;j<N;j+=step)
      count = count + 1;
  if(count == N)
  {
    printf(1,"Process %d has passed bigtest\n",getpid());
    return 0;
  }
  else
    printf(1,"Process %d failed bigtest\n",getpid());
  return -1;
}
int 
procGen(int n)
{
  int i,pid;
  for(i=0;i<n;i++)
  {
    pid = fork();
    if(pid<0)
      printf(1,"fork failed\n");
    else if(pid>0)
    {
      //parent process
      printf(1,"Parent %d has child %d\n",getpid(),pid);
      //wait();
    }
    else
    {
      //child process
      bigtest();
    }
  }
  return 0;
}
int
main(int argc,char *argv[])
{
  int n;
  if(argc<2)
    n = 2;
  else
    n = atoi(argv[1]);
  procGen(n);
  exit();
}
