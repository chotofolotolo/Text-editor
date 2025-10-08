#include "../include/file.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isAValidFileParameter(int argc, char **argv)
{
    if (argc > 1)
    {
        // printf(stdout, "====== VALID PARAMETERS =====\n");//=== DEBUG ===
        return true;
    }
    else
    {
        fprintf(stdout, "===== INVALID PARAMETERS ====\n");
        return false;
    }
}

void readFileNameParameter(File *file, char **argv)
{
    strcat(file->fileName, argv[1]);
}

void removeCharAtIndex(char *str, int index)
{
    int len = strlen(str);
    if (index < 0 || index >= len)
    {
        // printf("Invalid index.\n");//=== DEBUG ===
        return;
    }

    for (int i = index; i < len; i++)
    {
        str[i] = str[i + 1];
    }
}