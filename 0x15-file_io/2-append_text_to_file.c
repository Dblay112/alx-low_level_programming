#include "main.h"

/**
 *  * append_text_to_file - end of file appendixation
 *   * @filename: this is the name of the file pointer
 *    * @text_content: end of file string to be added
 *     *
 *      * Return: return 1 on success and -1 and error
 *       */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
