#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file
 * @filename: name of file
 * @letters: number of letters
 * Return: 0 or w
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t w, r, o;
char *buffy;

buffy = malloc(letters);

if (filename == NULL)
return (0);
o = open(filename, O_RDONLY);
if (o == -1)
return (0);
r = read(o, buffy, letters);
if (r == -1)
return (0);
w = write(STDOUT_FILENO, buffy, r);
if (w == -1)
return (0);

free(buffy);
close(o);
return (w);
}
