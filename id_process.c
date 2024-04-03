#include <stdio.h>
#include <unistd.h>

int main() {
  printf("PID текущего процесса: %d\n", getpid());
  printf("PID родительского процесса: %d\n", getppid());
  return 0;
}