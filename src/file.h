#ifndef FILE_H
#define FILE_H
#include<stdio.h>
#include<stdbool.h>

typedef struct{
   FILE *fileDesc;
   char fileName[50];
}File;

bool checkFile(File file,int fd,char fileName[50]);

void open(File file);

#endif
