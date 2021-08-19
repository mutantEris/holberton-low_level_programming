#include "holberton.h"

/**
 * append_to_text_to_file - appends to a file
 * @filename: the file name
 * @text_content: content of file
 * Return: -1 or 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
int w, o, buffy = 0;
if (filename == NULL)
return (-1);
if (text_content == NULL)
text_content = "";
while (text_content[buffy])
buffy++;
o = open(filename, O_RDWR | O_APPEND);
if (o == -1)
return (-1);
w = write(o, text_content, buffy);
if (w == -1)
return (-1);
close(o);
return (1);
}
