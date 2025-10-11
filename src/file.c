#include "../include/file.h"

bool check_file_exist(File *file)
{
    file->fileDesc = fopen(file->fileName, "r+"); // r+->open for reading and writing,the stream is positioned at the beginning of the file
    if (file->fileDesc == NULL)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void read_file_content(File file)
{
    char character;

    fprintf(stdout, "== %s ==\n", file.fileName);

    while (true)
    {
        character = fgetc(file.fileDesc);

        if (character != EOF)
        {
            fprintf(stdout, "%c", character);
        }
        else
        {
            fprintf(stdout, "==== END OF FILE ====\n");
            fseek(file.fileDesc, 0, SEEK_END); // DESPLAZA EL CURSOR AL ULTIMO CARACTER
            break;
        }
    }
}

void close_file(File file)
{
    fclose(file.fileDesc);
}
