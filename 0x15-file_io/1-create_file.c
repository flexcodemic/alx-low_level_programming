#include "main.h"

/**
* create_file - Create a file
*
* @filename: name of the file to create
* @text_content: NULL terminated string to write to the file
*
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int file_desc;
	ssize_t write_my_result;

	if (filename == NULL)
	{
		return (-1);
	}
	file_desc = open(filename, O_WRONLY | O_CREAT | O_TRUNC | S_IRUSR | S_IWUSR);
	if (file_desc == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		write_my_result = write(file_desc, text_content, strlen(text_content));
		if (write_my_result == -1)
		{
			close(file_desc);
			return (-1);
		}
	}
	close(file_desc);
	return (1);
}
