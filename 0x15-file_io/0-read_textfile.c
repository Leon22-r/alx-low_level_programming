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
	int fn, stdut;
	ssize_t prnt, readed;
	char *letts;

	if (filename == NULL || *filename == NULL)
		return (0);

	letts = malloc(letters);
	fn = open(filename, O_RDONLY);
	if (fn != -1)
	{
		/*reading the file*/
		readed = read(fn, letts, letters);
		stdut = open(STDOUT_FILENO, O_WRONLY);
		/*writing to stdout*/
		prnt = write(stdut, letts, letters);
		
	}
	else
		return (0);
	return (prnt);
}
