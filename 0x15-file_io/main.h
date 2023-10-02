#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int create_file(const char *filename, char *text_content);
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);



#endif /* _MAIN_H_ */
