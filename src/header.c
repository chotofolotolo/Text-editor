#include "../include/header.h"
#include <stdlib.h>

WINDOW *create_header()
{
    Header *header = malloc(sizeof(Header));
    return header;
}

void init_attr_header(int height, int width, int posY, int posX)
{
    header.header_window = newwin(height, width, posY, posX);
}

void draw_header()
{
    
}