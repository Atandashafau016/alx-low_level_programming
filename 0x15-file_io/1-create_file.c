task 1
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 *create_file - creates a file
 *@filename: file to be created
 *@text_content: content to write to the file
 *Return: 1 on success and 0 on error
 */
int create_file(const char *filename, char *text_content)
{
if (!filename)
return (-1);
mode_t permissions = S_IRUSR | S_IWUSR;
int flags = O_WRONLY | O_CREAT | O_TRUNC;
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
