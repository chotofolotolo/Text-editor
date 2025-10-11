#ifndef FILE_H
#define FILE_H
#include <stdio.h>
#include <stdbool.h>

typedef struct
{
   FILE *fileDesc;
   char fileName[50];
} File;

bool check_file_exist(File *file);

void read_file_content(File file);

void close_file(File file);

#endif
