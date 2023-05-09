#include "main.h"
/**
 * append_text_to_file - the main func
 * @filename: the filename
 * @text_content: the content
 * Return: 1 if sucsses
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	while (text_content[i] != '\0')
	{
		i++;
	}
	write(fd, text_content, i);
	close(fd);
	return (1);

}
