#include "../include/app.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("MAIN FUNC\n");
    printf("ARGS %d\n", argc);      // DEBUG
    printf("ARGV %s\n\n", argv[1]); // DEBUG
    initialize_program(argc, argv);
    run_program();
    finish_program();
    return 0;
}
