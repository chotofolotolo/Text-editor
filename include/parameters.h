#include "../include/file.h"
#ifndef PARAMETERS_H
#define PARAMETERS_H

void readFileNameParameter(File *file, char **argv);
bool isAValidFileParameter(int argc, char **argv);
void removeCharAtIndex(char *str, int index);

#endif
