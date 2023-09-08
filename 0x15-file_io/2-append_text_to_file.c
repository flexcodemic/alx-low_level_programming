#include "main.h"

/**
* append_text_to_file - appends text at the end of a file
*
* @filename: the name of the file
* @text_content: NULL terminated string to add at the end of the file
*
* Return: -1 if filename is NULL, 1 if text_content is NULL
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int write_result;
	int letters_num;
	int file_desc;

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
		for (letters_num = 0; text_content[letters_num]; letters_num++)
			;

		write_result = write(file_desc, text_content, letters_num);
		if (write_result == -1)
		{
			close(file_desc);
			return (1);
		}
	}
	else
	{
		close(file_desc);
		return (1);
	}
	close(file_desc);
	return (1);
}
