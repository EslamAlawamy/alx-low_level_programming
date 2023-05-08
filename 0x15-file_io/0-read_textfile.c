#include "main.h"
/**
 * read_textfile - the main function
 * @filename: file name
 * @letters: the size
 * Return: success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	letters = read(fd, buffer, letters);
	if ((size_t) write(STDOUT_FILENO, buffer, letters) != letters)
		return (0);
	close(fd);
	free(buffer);
	return (letters);
}
