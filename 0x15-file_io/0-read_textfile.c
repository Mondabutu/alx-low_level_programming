#include "main.h"
/**
 * read_textfile - This Reads a textfile and prints the contents to the POSIX STDOUT
 * @filename: The name of the file to read from
 * @letters: The number of characters it should print to the STDOUT
 * Return: Returns the number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fild = 0, k = 0;
	char *buffer;

	if (!filename || !letters)
		return (0);

	fild = open(filename, O_RDONLY);
	if (fild < 0)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	k = read(fild, buffer, letters);
	k = write(STDOUT_FILENO, buffer, k);
	if (k < 0)
		return (0);

	close(fild);
	free(buffer);
	return (k);
}
