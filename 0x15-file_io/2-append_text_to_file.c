#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: file name of the file to append to.
 * @text_content: the text content to append.
 * Return: If the function fail return -1 and 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
int append_text_to_file(const char *filename, char *text_content)
{
if (!filename)
return (-1);
mode_t permissions = S_IRUSR | S_IWUSR;
int flags = O_WRONLY | O_APPEND;
int fd = open(filename, flags, permissions);
if (fd == -1)
return (-1);
if (text_content)
{
size_t len = 0;
while (text_content[len] != '\0')
len++;
ssize_t nwritten = write(fd, text_content, len);
close(fd);
if (nwritten != (ssize_t) len)
return (-1);
}
else
{
close(fd);
}
return (1);
}
