#include "main.h"

/**
 * handle_file_error - check for error for an open file
 *
 * @file_incoming: copy incoming file
 * @file_outgoing: copy to outgoing file
 * @argv: vector for arguments
 *
 * Return: Nothing
 */

void handle_file_error(int file_incoming, int file_outgoing, char *argv[])
{
	if (file_incoming == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_outgoing == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Entry point
 *
 * @argc: counter for arguments
 * @argv: vector for arguments
 *
 * Return: Always 0 (Successful).
 */

int main(int argc, char *argv[])
{
	int file_incoming;
	int file_outgoing;
	int my_error;
	ssize_t chars_num;
	ssize_t write_me;
	char buffer_container[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	file_incoming = open(argv[1], O_RDONLY);
	file_outgoing = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	handle_file_error(file_incoming, file_outgoing, argv);
	while ((chars_num = read(file_incoming, buffer_container, 1024)) > 0)
	{
		if (chars_num == -1)
		{
			handle_file_error(-1, 0, argv);
		}
		write_me = write(file_outgoing, buffer_container, chars_num);
		if (write_me == -1)
		{
			handle_file_error(0, -1, argv);
		}
	}
	my_error = close(file_incoming);
	if (my_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_incoming);
		exit(100);
	}
	my_error = close(file_outgoing);
	if (my_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_outgoing);
		exit(100);
	}
	return (0);
}
