#include <ncurses.h>
#ifndef HEADER_H
#define HEADER_H

typedef struct UI UI; // forward definition

typedef struct Header
{
    WINDOW *header_window;
    void (*set_file_name)(char *file_name);
    void (*set_background_color)(NCURSES_COLOR_T color);
    // WINDOW *(*create_header)(void);
    void (*init_attr_header)(struct Header *header, int height, int width, int posY, int posX);
    void (*draw_header)(struct UI *ui);
} Header;

void init_header_impl(Header *header);
extern Header header;

#endif
