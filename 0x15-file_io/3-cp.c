#include "main.h"
/**
 * main - the main func
 * @argc: arg counter
 * @argv: arg vector
 * Return: is 0
 */
int main(int argc, char **argv)
{
	int fd_to_write, fd_to_read;
	int i = 0, buffer_read = BUFFER_SIZE;
	char buf[BUFFER_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_to_read = open(argv[1], O_RDONLY);
	if (fd_to_read == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

	fd_to_write = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
														  | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to_write == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_to_write), exit(99);
	}


	while (buffer_read == BUFFER_SIZE)
	{
		buffer_read = read(fd_to_read, buf, BUFFER_SIZE);
		if (buffer_read == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
		i = write(fd_to_write, buf, buffer_read);
		if (i < buffer_read)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (close(fd_to_read) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to_read), exit(100);

	if (close(fd_to_write) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to_write), exit(100);
	return (0);
}
