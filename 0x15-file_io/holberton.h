#ifndef _FILE_IO_
#define _FILE_IO_

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif