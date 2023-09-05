#include "main.h"
#include <string.h>

/**
 * append_text_to_file - append the text at end of a file.
 * @filename: The name of the file.
 * @text_content: is a NULL terminated string to write to the file.
 * Return: 1 on success and -1 on falure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fptr;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	fptr = fopen(filename, "a");
	if (fptr == NULL)
	{
		return (-1);
	}
	if (fputs(text_content, fptr) == EOF)
	{
		fclose(fptr);
		return (-1);
	}
	fclose(fptr);
	return (1);
}
