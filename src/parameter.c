#include "../include/file.h"
#include "../include/parameter.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX_FILE_NAME 256
#define MAX_FILE_ARGS 4

bool is_a_valid_file_parameter(int argc, char **argv)
{
    return argc > 1 && (strlen(argv[1]) < MAX_FILE_NAME) && argc < MAX_FILE_ARGS;
}

void read_file_name_parameter(Parameter *parameter)
{
    strcat(parameter->file.fileName, parameter->argv[1]);
    // strncpy(parameter->file.fileName, parameter->argv[1], sizeof(parameter->file.fileName) - 1);
    // parameter->file.fileName[sizeof(parameter->file.fileName) - 1] = '\0';
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