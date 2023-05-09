#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 *read_textfile - reads a text file and prints the letters
 *@filename: filename of the text to be read.
 *@letters: numbers of letters printed.
 *Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nread = 0;
char *buf = (char *) malloc(sizeof(char) * letters);
if (!filename || !buf)
return (0);
FILE *fp = fopen(filename, "r");
if (!fp)
{
free(buf);
return (
0);
}
nread = fread(buf, sizeof(char), letters, fp);
fclose(fp);
if (nread == 0)
{
free(buf);
return (0);
}
ssize_t nwritten = write(STDOUT_FILENO, buf, nread);
free(buf);
if (nwritten != nread)
return (0);
return (nread);
}
