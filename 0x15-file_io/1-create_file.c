#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - Creates a file with specified p
 * ermissions and writes text content.
 * @filename: Name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, str_length;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (str_length = 0; text_content[str_length] != '\0'; str_length++)
			;
		bytes_written = write(file_descriptor, text_content, str_length);
		if (bytes_written == -1 || bytes_written != str_length)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}
