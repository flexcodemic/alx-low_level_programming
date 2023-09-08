#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
*
* @filename: the name of the file in question
* @letters: the number of letter involve
*
* Return: 0 if file could not be opened, else the actual letter's number
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	char *my_buf;
	ssize_t read_num, write_num;

	if (!filename)
	{
		return (0);
	}
	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
	{
		return (0);
	}
	my_buf = malloc(sizeof(char) * letters);
	if (my_buf == NULL)
	{
		return (0);
	}
	read_num = read(file_desc, my_buf, letters);
	write_num = write(STDOUT_FILENO, my_buf, read_num);

	close(file_desc);
	free(my_buf);
	return (write_num);
}
