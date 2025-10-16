#include "../include/file.h"
#include "../include/parameter.h"
#include "../include/log.h"
#include "../include/ui.h"
#include <locale.h>

File file;
Parameter parameter;
UI ui;

bool initialize_program(int argc, char **argv)
{
    printf("INITIALIZE_PROGRAM FUNC\n");
    printf("ARGS 2 %d\n", argc);      // DEBUG
    printf("ARGV 2 %s\n\n", argv[1]); // DEBUG
    if (is_a_valid_file_parameter(argc, argv))
    {
        parameter.argc = argc;
        parameter.argv = argv;
        printf("VALID_FILE_PARAMETER FUNC\n\n");//DEBUG
        read_file_name_parameter(&parameter);
        fprintf(stdout, "%s\n", parameter.file.fileName); // DEBUG

        if (check_file_exist(&parameter.file))
        {
            return true;
        }
        else
        {
            print_string("==== FILE NOT EXIST ====\n");
            return false;
        }
    }
    else
    {
        fprintf(stdout, "===== INVALID PARAMETERS ====\n");
        return false;
    }
}

void run_program()
{
    setlocale(LC_ALL, ""); //DEBUG,Usa la configuración de locale del sistema operativo

    printf("READ FILE CONTENT FUNC\n");//DEBUG
    read_file_content(parameter.file);
    printf("INIT UI FUNC\n");//DEBUG

    init_ui_impl(&ui);
    while (true) // DEBUG
    {
        ui.init_ui(&ui);
    }
    // fprintf(stderr, "window=%p\n", (void *)ui.header->header_window);
}

void finish_program()
{
    close_file(parameter.file);
}