#include <ncurses.h>
#ifndef HEADER_H
#define HEADER_h

typedef struct
{
    WINDOW *header_window;
    void (*set_file_name)(char *file_name);
    void (*set_background_color)(NCURSES_COLOR_T color);
    WINDOW *(*create_header)(void);
    void (*init_attr_header)(int height, int width, int posY, int posX);
    void (*draw_header)(void);
} Header;

extern Header header;

#endif