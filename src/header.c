#include "../include/header.h"
#include "../include/ui.h"
#include <stdlib.h>

/*
WINDOW *create_header()
{
    Header *header = malloc(sizeof(Header));
    return header;
}
*/

void init_attr_header(Header *header,int height, int width, int posY, int posX)
{
    header->header_window = newwin(height, width, posY, posX);
}

void draw_header(UI *ui)
{
    box(ui->header->header_window, 0, 0); // Dibuja el borde a header
    wattron(ui->header->header_window, A_BOLD);
    mvwprintw(ui->header->header_window, 1, 1, "Text-editor");
    wattroff(ui->header->header_window, A_BOLD);
    wrefresh(ui->header->header_window);
}

void init_header_impl(Header *header)
{
    //header->create_header = create_header;
    header->init_attr_header = init_attr_header;
    header->draw_header = draw_header;
}