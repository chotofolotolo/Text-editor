#include "../include/file.h"
#include <stdbool.h>

bool checkFileExist(File *file)
{
    file->fileDesc = fopen(file->fileName, "r+"); // r+->open for reading and writing,the stream is positioned at the beginning of the file
    if (file->fileDesc == NULL)
    {
        fprintf(stdout, "==== FILE NOT EXIST ====\n");
        return false;
    }
    else
    {
        // printf("fileDesc != NULL\n");//=== DEBUG ===
        return true;
    }
}

void readFileContent(File *file)
{
    char character;

    fprintf(stdout, "== %s ==\n", file->fileName);

    while (true)
    {
        character = fgetc(file->fileDesc);

        if (character != EOF)
        {
            fprintf(stdout, "%c", character);
        }
        else
        {
            fprintf(stdout, "==== END OF FILE ====\n");
            fseek(file->fileDesc, 0, SEEK_END); // DESPLAZA EL CURSOR AL ULTIMO CARACTER
            break;
        }
    }
}

void closeFile(File *file)
{
    fclose(file->fileDesc);
}
