#ifndef _MAIN_H_
#define _MAIN_H_


#define USAGE_ERROR 97
#define READ_ERROR 98
#define WRITE_ERROR 99
#define CLOSE_ERROR 100
#define MY_BUFFER_SIZE 1024


#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>


int _putchar(char c);
int append_text_to_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif /* -MAIN_H_ */
