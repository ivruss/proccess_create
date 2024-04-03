#include <stdio.h>
#include <unistd.h>

int main() {
  pid_t pid;

  pid = fork();

  if (pid == 0) {
    printf("PID текущего (дочернего) процесса: %d\n", getpid());
    printf("PID родительского процесса: %d\n", getppid());
  } else if (pid > 0) {
    printf("PID текущего (родительского) процесса: %d\n", getpid());
    printf("PID дочернего процесса: %d\n", pid);
  } else {
    perror("Ошибка при создании копии!");
    return 1;
  }

  return 0;
}