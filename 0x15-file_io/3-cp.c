#include "holberton.h"
/**
 * main - copies file
 * @argc: argument count
 * @argv: argument variables
 * Return: 0
 */
int main(int argc, char **argv)
{
int from, to, count;
char buffer[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97); }
from = open(argv[1], O_RDONLY);
if (from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't readfrom file %s\n", argv[1]);
exit(98); }
to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
exit(99); }
while ((count = read(from, buffer, 1024)) > 0)
{
if (write(to, buffer, count) != count)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
exit(99); } }
if (count == -1)
{
dprintf(STDERR_FILENO, "Error: Can't readfrom file %s\n", argv[1]);
exit(98); }
if (close(from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d", from);
exit(100); }
if (close(to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d", to);
exit(100); }
return (0); }
