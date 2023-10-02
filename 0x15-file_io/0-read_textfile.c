#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: the pointer string
 * @letters:  the number of letters it should read and print
 *
 * Return:  the actual number of letters it could read and print
 * 0 if the file can not be opened or read or if filename is NULL
 * or if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	char *buffer_container;
	ssize_t read_me, write_me;

	if (!filename)
	{
		return (0);
	}
	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
	{
		return (0);
	}
	buffer_container = malloc(sizeof(char) * letters);
	if (buffer_container == NULL)
	{
		return (0);
	}
	read_me = read(file_desc, buffer_container, letters);
	write_me = write(STDOUT_FILENO, buffer_container, read_me);
	close(file_desc);
	free(buffer_container);
	return (write_me);
}







