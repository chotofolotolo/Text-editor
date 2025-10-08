#ifndef FILE_H
#define FILE_H
#include <stdio.h>
#include <stdbool.h>

typedef struct
{
   FILE *fileDesc;
   char fileName[50];
} File;

bool checkFileExist(File *file);

void readFileContent(File *file);

void closeFile(File *file);

#endif
