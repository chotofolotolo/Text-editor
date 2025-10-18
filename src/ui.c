#include "../include/ui.h"
#include <stdlib.h>
#include <stdio.h>

UI ui;

void draw_ui(UI *ui)
{
    ui->header->draw_header(ui);
    // ui->nav_bar->draw_nav_bar(&ui);
    // ui->text_area->draw_text_area(&ui);
}

void init_ui(UI *ui)
{
    ui->draw_ui(ui);
}

void init_ui_impl(UI *ui)
{
    printf("INIT_UI_IMPL\n"); // DEBUG
    ui->init_ui = init_ui;
    ui->setup_ui = setup_ui;
    ui->draw_ui = draw_ui;
    ui->header = malloc(sizeof(Header));
    init_header_impl(ui->header);
    // ui->header->create_header();
}

void setup_ui(UI *ui)
{
    printf("SETUP_UI\n"); // DEBUG
    initscr();            // Inicializa ncurses
    cbreak();
    noecho();
    keypad(stdscr, TRUE);

    // init_ui_impl(ui);
    //  Crear ventana nueva
    ui->header->init_attr_header(ui->header,10, 30, 5, 10);
    ui->header->header_window = newwin(10, 30, 5, 10);

    // setup_ui(ui);
    // ui->init_ui(ui);
    // Espera tecla para que se vea
    // getch();
}

WINDOW *create_newWin(int height, int width, int posY, int posX)
{
    printf("CREATE_NEWWIN\n");                                // DEBUG
    WINDOW *local_window = newwin(height, width, posY, posX); // dynamic struct,exist after function call
    // box(local_window, 0, 0);
    return local_window;
}

void setText(WINDOW *window, int y, int x, const char *str)
{
    mvwprintw(window, y, x, str);
}

void destroy_win(WINDOW *window)
{
    wrefresh(window);
    delwin(window);
}