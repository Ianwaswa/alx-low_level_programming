#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * append_text_to_file - appends text
 * @filename: filename to open
 * @text_content: text to append
 *
 * Return: success:1 failure: 0
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd1, num_letters, rw;

	if (!filename)
		return (-1);

	fd1 = open(filename, O_WRONLY | O_APPEND);
	if (fd1 == -1)
		return (-1);

	if (text_content)
	{
		for (num_letters = 0; text_content[num_letters]; ++num_letters)
			;
		rw = write(fd1, text_content, num_letters);
		if (rw == -1)
			return (-1);
	}

	close(fd1);

	return (1);
}
