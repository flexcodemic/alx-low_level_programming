#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_desc;
	int read_write_me;
	int letters_num;

	if (!filename)
	{
		return (-1);
	}
	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_desc == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	for (letters_num = 0; text_content[letters_num]; letters_num++)
		;
	read_write_me = write(file_desc, text_content, letters_num);
	if (read_write_me == -1)
	{
		return (-1);
	}
	close(file_desc);
	return (1);
}










