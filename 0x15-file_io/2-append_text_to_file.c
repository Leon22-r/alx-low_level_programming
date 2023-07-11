#include "main.h"
/**
 * append_text_to_file - appends text to the end of a file
 * @filename: the file to append to.
 * @text_content: the content to append
 * Return: 1 on success and 0 on failure
 *
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t wri;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_APPEND);
	if (fp != -1)
	{
		if (text_content)
		{
			wri = write(fp, text_content, sizeof(text_content));
			if (wri < 0)
				return (-1);
		}
		close(fp);
	}
	else
		return (-1);
	return (1);
}
