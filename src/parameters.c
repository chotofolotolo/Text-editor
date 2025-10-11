#include "../include/file.h"
#include "../include/parameter.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_a_valid_file_parameter(int argc, char **argv)
{
    return argc > 1;
}

void read_file_name_parameter(Parameter *parameter)
{
    strcat(parameter->file.fileName, parameter->argv[1]);
}

/*
void remove_char_at_index(char *file_name, int index)
{
    int len = strlen(file_name);
    if (index < 0 || index >= len)
    {
        return;
    }

    for (int i = index; i < len; i++)
    {
        file_name[i] = file_name[i + 1];
    }
}
*/