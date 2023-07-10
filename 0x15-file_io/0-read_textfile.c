#include "main.h"
/**
 * read_textfile - reads a textfile and prints to POSIX standard
 * output
 * @filename: the file's name
 * @letters: the number of letters to print
 * Return: the number of characters printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fn;
	ssize_t prnt, readed;
	char letts[1024];

	if (filename == NULL)
		return (0);

	fn = open(filename, O_RDONLY);
	if (fn != -1)
	{
		/*reading the file*/
		readed = read(fn, letts, letters);
		/*writing to stdout*/
		prnt = write(STDOUT_FILENO, letts, readed);
		
	}
	else
		return (0);
	return (prnt);
}
