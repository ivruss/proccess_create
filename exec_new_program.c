#include <stdio.h>
#include <unistd.h>

int main() {
  pid_t pid; // Родительский процесс
  char *new_program = "./id_process"; // Путь к новой программе

  pid = fork();

  if (pid == 0) {
    execl(new_program, new_program, NULL); // Запуск новой программы
    perror("Ошибка при запуске новой программы!"); // Если execl вернется, значит произошла ошибка
    return 1;

  } else if (pid > 0) { 
    printf("PID дочернего процесса: %d\n", pid);

  } else {
    perror("Ошибка при создании копии!");
    return 1;
  }

  return 0;
}