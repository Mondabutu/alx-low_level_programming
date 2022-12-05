#include "main.h"
/**
 * append_text_to_file - adds text to EOF
 * @filename: file to append data to.
 * @text_content: data to append to file
 * Return: 1 if succesfull else -1 on err
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fl = 0, k = 0, i = 0;

	if (!filename)
		return (-1);

	fl = open(filename, O_WRONLY | O_APPEND);
	if (fl < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;

		k = write(fl, text_content, i);
		if (k < 0)
		return (-1);
	}
	close(fl);
	return (1);
}
