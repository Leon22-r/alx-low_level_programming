#include "main.h"
/**
 * create_file - creates a new file
 * @filename: name of file
 * @text_content: what is to be in the file
*/
int create_file(const char *filename, char *text_content)
{
	size_t len;
	int file;

	if (filename == NULL)
		return (-1);
	len = strlen(text_content);
	file = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 600);
	if (file != 0)
	{
		if (text_content)
		{
			write(file, text_content, len);
		}
	}
	else
		return (-1);
	return (1);

}
