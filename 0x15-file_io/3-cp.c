#include "main.h"
/**
 * main - copies content of file 1 to file 2
 * @argv: the number of arguements
 * @argc: the files
 * Return: 1 on success and 0 on failure
*/
int main(int argc, char *argv[])
{
	int from, to;
	int close1, close2;
	char readed[1024];
	ssize_t red, writen;

	(void) argv;
	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	if (from < 0)
	{
		dprintf(STDOUT_FILENO,  "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (to < 0)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (to != -1 && from != -1)
	{
		red = read(from, readed, sizeof(readed));
		writen =  write(to, readed, sizeof(readed));
		close1 = close(from);
		close2 = close(to);
		if (close1 != 0)
		{
			dprintf(STDOUT_FILENO, "Error: Can't close fd %d", from);
			exit(100);
		}
		if (close2 != 0)
		{
			dprintf(STDOUT_FILENO, "Error: Can't close fd %d", to);
			exit(100);
		}
	}
	return (0);
}
