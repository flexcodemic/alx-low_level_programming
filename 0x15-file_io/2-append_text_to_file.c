#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add
 *                at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc;
	ssize_t read_write_me;
	size_t letters_num;

	if (!filename)
	{
		return (-1);
	}
	file_desc = open(filename, O_WRONLY | O_APPEND);
	if (file_desc == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		letters_num = 0;
		while (text_content[letters_num])
		{
			letters_num++;
		}
		read_write_me = write(file_desc, text_content, letters_num);
		if (read_write_me == -1)
		{
			close(file_desc);
			return (-1);
		}
	}
	close(file_desc);
	return (1);
}
