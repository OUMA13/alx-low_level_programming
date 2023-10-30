#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define READ_BUF_SIZE 1024

int _putchar(char c);
ssize_t read_textfile(const char *flename, size_t letters);
int creat_file(const char *filename, char *text_content);
int append_text_tofile(const char *filename, char *text_content);

#endif
