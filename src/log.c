#include <stdio.h>
#include "../include/log.h"

void print_app_name()
{
    fprintf(stdout, "==== BodrioEditor ====\n");
}

void print_string(char str[])
{
    fprintf(stdout, "%s\n", str);
}