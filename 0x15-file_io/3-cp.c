#include <stdio.h>
#include "main.h"
/**
* print_my_error - print error and exit
*
* @exit_code: the program exit code
* @code_format: error receive format
* @argv: the argment in the error received
*
* Return: Nothing
*/

void print_my_error(int  exit_code, int code_format, char *argv[])
{
	if (exit_code == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(READ_ERROR);
	}
	if (code_format == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(WRITE_ERROR);
	}
}

/**
* main - program Entry point
*
* @argc: number of commandline argument
* @argv: array of commandline argument
*
*Return: 0 Always (success) or error on code failure
*/

int main(int argc, char *argv[])
{
	int exit_code;
	int code_format;
	int error_handle;
	char buff_size[MY_BUFFER_SIZE];
	ssize_t my_chars, write_result;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(USAGE_ERROR);
	}
	exit_code = open(argv[1], O_RDONLY);
	code_format = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	print_my_error(exit_code, code_format, argv);

	my_chars = 1024;
	while (my_chars == MY_BUFFER_SIZE)
	{
		my_chars = read(exit_code, buff_size, MY_BUFFER_SIZE);
		if (my_chars == -1)
			print_my_error(-1, 0, argv);
		write_result = write(exit_code, buff_size, my_chars);
		if (write_result == -1)
		print_my_error(0, -1, argv);
	}
	error_handle = close(exit_code);
	if (error_handle == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", exit_code);
		exit(CLOSE_ERROR);
	}
	error_handle = close(code_format);
	if (error_handle == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", code_format);
		exit(CLOSE_ERROR);
	}
	return (0);
}
