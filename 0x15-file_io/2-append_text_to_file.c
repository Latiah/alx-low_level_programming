#include<stdio.h>
#include "main.h"
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to be appended to the file
 * Return: value returned
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, written, len;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
len = 0;
while (*(text_content + len) != '\0')
len++;
written = write(fd, text_content, len);
if (written == -1)
{
close(fd);
write(STDOUT_FILENO, "fails", 5);
return (-1);
}
}
close(fd);
return (1);
}
