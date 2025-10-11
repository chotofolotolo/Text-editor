#include "../include/file.h"
#ifndef PARAMETERS_H
#define PARAMETERS_H

typedef struct
{
    int argc;
    char **argv;
    File file;
} Parameter;

void read_file_name_parameter(Parameter *parameter);
bool is_a_valid_file_parameter(int argc, char **argv);
// void remove_char_at_index(char *str, int index);

#endif
