#include <stdio.h>
#include <stdbool.h>
#include "../include/parameters.h"
#include "../include/file.h"

int main(int argc, char *argv[])
{
    fprintf(stdout, "==== BodrioEditor ====\n");

    File file;

    if (isAValidFileParameter(argc, argv))
    {
        // printf("isAValidFileParameter = true\n");//=== DEBUG ===
        readFileNameParameter(&file, argv);
        // printf("readFileNameParameter->%s\n", file.fileName);//=== DEBUG ===
        removeCharAtIndex(file.fileName, 0);
        // printf("modified name->%s\n", file.fileName);////=== DEBUG ===

        if (checkFileExist(&file))
        {
            readFileContent(&file);
            closeFile(&file);
        }
    }
    return 0;
}
