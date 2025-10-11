#include "../include/file.h"
#include "../include/parameter.h"
#include "../include/view.h"

File file;
Parameter parameter;

bool initialize_program(int argc, char **argv)
{

    if (is_a_valid_file_parameter(argc, argv))
    {
        parameter.argc = argc;
        parameter.argv = argv;
        read_file_name_parameter(&parameter);
        fprintf(stdout, "%s\n", parameter.argv[1]);
        fprintf(stdout, "%s\n", parameter.file.fileName);

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
    read_file_content(parameter.file);
}

void finish_program()
{
    close_file(parameter.file);
}