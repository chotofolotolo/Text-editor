#include <ncurses.h>
#include "../include/header.h"

#ifndef UI_H
#define UI_H

typedef struct
{
    WINDOW *text_area_window;
} Text_area;

typedef struct
{
    WINDOW *nav_bar_window;
} Nav_bar;

typedef struct UI
{
    Header *header;
    Text_area *text_area;
    Nav_bar *nav_bar;
    // WINDOW *stdscr;
    void (*setup_ui)(UI *ui);
    void (*draw_ui)(UI *ui);
    void (*init_ui)(struct UI *ui);
} UI;

WINDOW *create_newWin(int width, int height, int posX, int posY);
void destroy_win(WINDOW *window);
void setText(WINDOW *window, int y, int x, const char *str);

void init_ui_impl(UI *ui);
void init_ui(struct UI *ui);
void setup_ui(UI *ui);

extern UI ui;
#endif
