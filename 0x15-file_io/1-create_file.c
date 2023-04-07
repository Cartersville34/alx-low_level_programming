#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int string_length(const char *s);

/**
 * create_file - creates a file and writes to it
 *
 * @filename: the path to the file to create
 * @text_content: the content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;
	int size;
	char *buffer;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	size = string_length(text_content);
	buffer = malloc(sizeof(char) * size);
	if (!buffer)
	{
		close(fd);
		return (-1);
	}

	w = write(fd, text_content, size);
	if (w == -1)
	{
		close(fd);
		free(buffer);
		return (-1);
	}

	close(fd);
	free(buffer);

	return (1);
}

/**
 * string_length - calculates the length of a string
 *
 * @s: a pointer to the string
 *
 * Return: the length of the string
 */
int string_length(const char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
		length++;

	return (length);
}

