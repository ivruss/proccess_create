# Файлы создания процессов (первое задание)

1. id_process:

Эта программа выводит ID текущего и родительского процесса. 
Компилируется командой gcc id_process.c -o id_process
Исполняется командой ./id_process 

2. Создание копий и вывод ID:

Эта программа создает 3 копии себя и выводит ID текущего и родительского процесса в каждой копии.
Компилируется командой gcc clone_process.c -o clone_process
Исполняется командой sudo ./clone_process, поскольку может потребовать права администратора


3. Создание копии с новым кодом (exec):

Эта программа создает копию себя и пытается запустить новую программу id_process в дочернем процессе.
Компилируется командой gcc exec_new_program.c -o exec_new_program
Исполняется командой sudo ./exec_new_program, поскольку может потребовать права администратора