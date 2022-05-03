#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * create_file - a function that creates a file
 * @filename: name of the file to create
 * @text_content :string written to in the file
 * Return: value returned
 */
int create_file(const char *filename, char *text_content)
{
ssize_t written;
int fd, len;
if (filename == NULL)
return (-1);
fd = open(filename, O_RDWR | O_CREAT | O_TRUNC);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
len = 0;
while (*(text_content) != '\0')
len++;
written = write(fd, text_content, len);
if (written == -1)
{
write(1, "fails", 6);
return (-1);
}
}
close(fd);
return (1);
}
