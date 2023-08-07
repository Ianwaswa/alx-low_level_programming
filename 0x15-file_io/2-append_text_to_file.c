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
	int fd, err, len;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0) /* failed opening file */
		return (-1);
	if (!text_content)
	{ /* there is a file, but no new content to write to it */
		close(fd);
		return (1);
	}
	while (*(text_content + len))
		len++;
	err = write(fd, text_content, len);
	close(fd);
	if (err < 0)
		return (-1);
	return (1);
}
